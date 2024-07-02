/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:01:59 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/29 16:56:56 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBitcoinExchange.hpp"
#include <iomanip>

BtcEx::BtcEx(void) {}

BtcEx::BtcEx(const std::string& path) : _path(path)
{}

BtcEx::BtcEx(const BtcEx& src) : _btc(src._btc), _path(src._path)
{}

BtcEx&	 BtcEx::operator=(const BtcEx& src)
{
	if (this != &src)
		this->_btc = src._btc;

	return *this;
}

BtcEx::~BtcEx(void) {}

static void	valiDate(const std::string& date)
{
	int			dom[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int			ymd, mt;
	char		*ptr = NULL;
	std::string	nbr;

	if (DEBUG)
		std::cout << "Date validation: ";
	ymd = static_cast<int>(strtol(date.c_str(), &ptr, 10));
	if (ymd < 0 || (ptr != NULL && ptr[0] != '-'))
		throw std::exception();
	if (DEBUG)
		std::cout << "Year " << ymd << " Valid. ";
	if (!(ymd % 4)) {
		if (!(ymd % 100) && ymd % 400)
			;
		else if (!(ymd % 100) && !(ymd % 400))
			dom[2] = 29;
		else
			dom[2] = 29;
	}
	nbr = date.substr(date.find('-') + 1);
	ymd = static_cast<int>(strtol(nbr.c_str(), &ptr, 10));
	if (!(ymd <= 12 && ymd > 0) || (ptr != NULL && ptr[0] != '-'))
		throw std::exception();
	if (DEBUG)
		std::cout << "Month " << ymd << " Valid. ";
	mt = ymd;
	nbr = nbr.substr(nbr.find('-') + 1);
	ymd = static_cast<int>(strtol(nbr.c_str(), &ptr, 10));
	if (!(ymd <= dom[mt] && ymd > 0) || (ptr != NULL && ptr[0] != 0))
		throw std::exception();
	if (DEBUG)
		std::cout << "Day " << ymd << " Valid.\n";
}

void BtcEx::init(void)
{
	std::ifstream	db;
	std::string		line, date, sub;
	std::size_t		pos;
	float			amt;
	char			*ptr = NULL;

	db.open(this->_path.c_str(), std::ios::in);
	if (!db.is_open()) {
		throw std::invalid_argument("Cannot find database.\n");
	}
	while (getline (db, line)) {
		pos = line.find(',');
		if (pos == (std::size_t) - 1) {
			std::cerr << "Invalid data format.\n";
			continue;
		}
		try {
			date = line.substr(0, pos);
			valiDate(date);
		}
		catch (const std::exception& e) {
			(void)e;
			continue;
		}
		sub = line.substr(pos + 1);
		amt = strtof(sub.c_str() , &ptr);
		if (amt >= 0 && ptr != NULL && ptr[0] == 0) {
			this->_btc[date] = amt;
			if (DEBUG)
				std::cout << "Validated amount " << this->_btc[date] << "\n";
		}
		else
			std::cerr << "Amount " << line.substr(pos + 1) << " invalid.\n";
	}
	db.close();
}

void	BtcEx::print_valmult(const std::string& ref, const float amt)
{
	std::map<std::string, float>::const_iterator	it = this->_btc.begin();
	std::map<std::string, float>::const_iterator	ite = this->_btc.end();

	while (it != ite && ref > it->first)
		it++;
	if (ref < this->_btc.begin()->first) {
		std::cerr << "Date " << ref << " starts earlier than database.\n";
	}
	else if (ref == it->first) {
		std::cout << "Value for year " << ref << ": " << amt << " => " << std::setprecision(8) << amt * this->_btc[ref] << "\n";
	}
	else {
		--it;
		std::cout << "Value for year " << it->first << ": " << amt << " => " << std::setprecision(8) << amt * this->_btc[it->first] << "\n";
	}
}

void	BtcEx::run(std::ifstream& txt)
{
	std::string	line, date, sub;
	std::size_t	pos;
	float		amt;
	char		*ptr = NULL;

	while (getline (txt, line)) {
		pos = line.find(" | ");
		if (pos == (std::size_t) - 1) {
			std::cerr << "Invalid data format.\n";
			continue;
		}
		try {
			date = line.substr(0, pos);
			valiDate(date);
		}
		catch (const std::exception& e) {
			std::cerr << "Date: " << line << " invalid.\n";
			continue;
		}
		sub = line.substr(pos + 3);
		if (sub[0] == 0) {
			std::cerr << "Invalid monetary format.\n";
			continue;
		}
		amt = strtof(sub.c_str() , &ptr);
		if (amt <= 1000 && amt >= 0 && ptr != NULL && ptr[0] == 0)
			print_valmult(date, amt);
		else {
			std::cerr << "Amount " << line.substr(pos + 3) << " invalid";
			if (amt < 0)
				std::cerr << ": negative numbers are not supported.\n";
			else if (amt > 1000)
				std::cerr << ": amount larger than 1000.\n";
			else
				std::cerr << ".\n";
		}
	}
	txt.close();
}
