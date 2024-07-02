/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:51:26 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:52:06 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"
#include <iostream>

Zombie::Zombie(): _Name("Default")
{
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie with ID " << this->_ID << " is DEAD as FU-" << std::endl;
}

void	Zombie::SetNameID(const std::string &name, int i)
{
	this->_Name = name;
	this->_ID = i;

	std::cout << "Set name " << name << " for Zombie with ID " << i << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_Name << " " << this->_ID << ": BraiiiiiiinnnzzzZ...\n";
}
