/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:51:26 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:06:28 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _Name(name)
{
	std::cout << "New Zombie with name " << name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie with name " << this->_Name << " is DEAD as FU-" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_Name << ": BraiiiiiiinnnzzzZ...\n";
}
