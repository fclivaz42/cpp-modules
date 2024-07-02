/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:45:09 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 16:51:11 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(const std::string &initType)
{
	this->_type = initType;
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(const std::string& newType)
{
	this->_type = newType;
}
