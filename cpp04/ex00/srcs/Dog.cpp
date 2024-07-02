/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:07:41 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog constructor called.\n";
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called.\n";
	this->_type = src._type;
}

Dog&	Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called.\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "BARK BARK BARK BARK BARK\n";
}
