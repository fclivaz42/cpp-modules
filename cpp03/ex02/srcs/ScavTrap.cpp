/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 22:02:02 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap constructor called with name " << Name << std::endl;
	this->_ep = 50;
	this->_hp = 100;
	this->_atkdmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name)
{
	std::cout << "ScavTrap copy constructor called\n";
	this->_ep = src._ep;
	this->_hp = src._hp;
	this->_atkdmg = src._atkdmg;
	this->_name = src._name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignation constructor called\n";
	if (this != &src) {
		this->_ep = src._ep;
		this->_hp = src._hp;
		this->_atkdmg = src._atkdmg;
		this->_name = src._name;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed :(\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
		std::cout << "ScavTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_atkdmg << " damage!\n";
	else
		std::cout << "ScavTrap " << this->_name << " is missing energy and could not attack!\n";
	--this->_ep;
}

void	ScavTrap::guardGate()
{
	if (this->_ep > 0 && this->_hp > 0)
		std::cout << "ScavTrap " << this->_name << " enters GateKeeper mode!\n";
	else
		std::cout << "ScavTrap " << this->_name << " is missing energy and could not GateKeep!\n";
	--this->_ep;
}
