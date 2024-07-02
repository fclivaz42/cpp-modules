/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 22:01:00 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFragTrap.hpp"

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name)
{
	std::cout << "FragTrap constructor called with name " << Name << std::endl;
	this->_ep = 100;
	this->_hp = 100;
	this->_atkdmg = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name)
{
	std::cout << "FragTrap copy constructor called\n";
	this->_ep = src._ep;
	this->_hp = src._hp;
	this->_atkdmg = src._atkdmg;
	this->_name = src._name;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignation constructor called\n";
	if (this != &src) {
		this->_ep = src._ep;
		this->_hp = src._hp;
		this->_atkdmg = src._atkdmg;
		this->_name = src._name;
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " has been destroyed :(\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
		std::cout << "FragTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_atkdmg << " damage!\n";
	else
		std::cout << "FragTrap " << this->_name << " is missing energy and could not attack!\n";
	--this->_ep;
}

void	FragTrap::highFivesGuys(void)
{
		std::cout << "FragTrap " << this->_name << " asks for high fives plez :(\n";
}
