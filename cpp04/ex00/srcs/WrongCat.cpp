/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:07:49 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassWrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called.\n";
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called.\n";
	this->_type = src._type;
}

WrongCat&	WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called.\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MWOE MWOE MWOE MWOE\n";
}
