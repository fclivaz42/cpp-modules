/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:07:26 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassCat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat constructor called.\n";
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called.\n";
	this->_type = src._type;
}

Cat&	Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called.\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW MEOW MEOW MEOW MEOW\n";
}
