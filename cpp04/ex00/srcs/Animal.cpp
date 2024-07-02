/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 19:48:38 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassAnimal.hpp"

Animal::Animal(void)
{
	this->_type = "Abstract Animal";
	std::cout << "Animal constructor called.\n";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called.\n";
	this->_type = src._type;
}

Animal&	Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called.\n";
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "*sounds of a blob of cells*\n";
}
