/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:06:42 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 20:06:44 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	++this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";closed\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
				<< this->_amount << ";deposit:" << deposit;
	this->_totalAmount += deposit;
	this->_amount += deposit;
	++this->_nbDeposits;
	++this->_totalNbDeposits;
	std::cout << ";amount:" << this->_amount << ";nb_deposits" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
				<< this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused\n";
		return false;
	}
	std::cout << withdrawal;
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	++this->_nbWithdrawals;
	++this->_totalNbWithdrawals;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
				<< this->_amount << ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
				<< _totalAmount << ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t tt = std::time(0);
	std::tm *ptm = std::localtime(&tt);
	std::cout << "[";
	std::cout << (ptm->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (ptm->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << (ptm->tm_mday) << "_";
	std::cout << std::setw(2) << std::setfill('0') << (ptm->tm_hour);
	std::cout << std::setw(2) << std::setfill('0') << (ptm->tm_min);
	std::cout << std::setw(2) << std::setfill('0') << (ptm->tm_sec) << "] ";
}
