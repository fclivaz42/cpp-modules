/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 19:02:14 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassAnimal.hpp"

absAnimal::absAnimal(void)
{
	this->_type = "Abstract absAnimal";
	std::cout << "absAnimal constructor called.\n";
}

absAnimal::absAnimal(const absAnimal &src)
{
	std::cout << "absAnimal copy constructor called.\n";
	this->_type = src._type;
}

absAnimal&	absAnimal::operator=(const absAnimal &src)
{
	std::cout << "absAnimal copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

absAnimal::~absAnimal()
{
	std::cout << "absAnimal destructor called.\n";
}

std::string	absAnimal::getType(void) const
{
	return this->_type;
}

void	absAnimal::makeSound(void) const
{
	std::cout << "*sounds of a blob of cells*\n";
}
