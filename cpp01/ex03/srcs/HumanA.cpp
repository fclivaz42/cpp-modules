/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:52:19 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 17:33:57 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& startWeapon) : _heldWeapon(startWeapon)
{
	this->_name = name;
	this->_heldWeapon = startWeapon;
}

HumanA::~HumanA()
{
}

void	HumanA::setWeapon(Weapon& newWeapon)
{
	this->_heldWeapon = newWeapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their mighty " << _heldWeapon.getType() << "!\n";
}
