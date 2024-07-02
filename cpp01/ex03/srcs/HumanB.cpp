/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:52:19 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 17:37:55 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->_heldWeapon = &newWeapon;
}

void	HumanB::attack(void)
{
	if (!this->_heldWeapon) {
		std::cout << this->_name << " does not have a weapon!\n";
		return ;
	}
	std::cout << this->_name << " attacks with their mighty " << _heldWeapon->getType() << "!\n";
}
