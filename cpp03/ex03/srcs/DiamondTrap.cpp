/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:49:01 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name)
{
	std::cout << "DiamondTrap constructor called with name " << Name << std::endl;
	ClapTrap::_name = Name + "_clap_name";
	this->_name = Name;
	FragTrap::_hp = 100;
	ScavTrap::_ep = 50;
	FragTrap::_atkdmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src._name + "_clap_name"), ScavTrap(src._name), FragTrap(src._name)
{
	std::cout << "DiamondTrap copy constructor called\n";
	FragTrap::_hp = 100;
	ScavTrap::_ep = 50;
	FragTrap::_atkdmg = 30;
	this->_name = src._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignation constructor called\n";
	if (this != &src) {
		FragTrap::_hp = src.FragTrap::_hp;
		ScavTrap::_ep = src.ScavTrap::_ep;
		FragTrap::_atkdmg = src.FragTrap::_atkdmg;
		this->_name = src._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed :(\n";
}

void	DiamondTrap::whoAmI(void)
{
		std::cout << "... who am I...? Am I " << this->_name << "...? or am I " << ClapTrap::_name << "...?\n";
}
