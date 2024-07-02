/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 19:58:13 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassWrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "Abstract WrongAnimal";
	std::cout << "WrongAnimal constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called.\n";
	this->_type = src._type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called.\n";
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*sounds of a blob of gears...?*\n";
}
