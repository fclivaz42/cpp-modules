/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 22:02:51 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& Name) : _name(Name)
{
	std::cout << "ClapTrap constructor called with name " << Name << std::endl;
	this->_ep = 10;
	this->_hp = 10;
	this->_atkdmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called\n";
	this->_ep = src._ep;
	this->_hp = src._hp;
	this->_atkdmg = src._atkdmg;
	this->_name = src._name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap copy assignation constructor called\n";
	if (this != &src) {
		this->_ep = src._ep;
		this->_hp = src._hp;
		this->_atkdmg = src._atkdmg;
		this->_name = src._name;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed :(\n";
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
		std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_atkdmg << " damage!\n";
	else
		std::cout << "ClapTrap " << this->_name << " is missing energy and could not attack!\n";
	--this->_ep;
}

void	ClapTrap::takeDamage(uint amount)
{
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes "
		<< amount << " points of damage!\n";
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " succumbs to its wounds!\n";
}

void	ClapTrap::beRepaired(uint amount)
{
	if (this->_ep > 0 && this->_hp > 0) {
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repairs "
		<< amount << " damage!\n";
	}
	else
		std::cout << "ClapTrap " << this->_name << " is missing energy and could not repair!\n";
	--this->_ep;
}
