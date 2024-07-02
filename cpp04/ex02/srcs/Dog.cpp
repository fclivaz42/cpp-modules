/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:57:15 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called.\n";
	this->_type = "Dog";
	this->_dogBrain = new Brain;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called.\n";
	this->_type = src._type;
	this->_dogBrain = new Brain(*src._dogBrain);
}

Dog&	Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
		this->_dogBrain = new Brain(*src._dogBrain);
		delete src._dogBrain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called.\n";
	delete this->_dogBrain;
}

void	Dog::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_dogBrain->getIdea(i) << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "BARK BARK BARK BARK BARK\n";
}
