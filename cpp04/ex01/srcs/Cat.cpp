/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:57:56 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassCat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat constructor called.\n";
	this->_type = "Cat";
	this->_catBrain = new Brain;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called.\n";
	this->_type = src._type;
	this->_catBrain = new Brain(*src._catBrain);
}

Cat&	Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
		this->_catBrain = new Brain(*src._catBrain);
		delete src._catBrain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called.\n";
	delete this->_catBrain;
}

void	Cat::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_catBrain->getIdea(i) << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW MEOW MEOW MEOW MEOW\n";
}
