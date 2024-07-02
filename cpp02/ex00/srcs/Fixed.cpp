/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:45:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:08:15 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called. Value set at 0.\n";
	this->_fixedNumber = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called.\n";
	this->_fixedNumber = src._fixedNumber;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation constructor called.\n";
	if (this != &src)
		this->_fixedNumber = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called.\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called.\n";
	return this->_fixedNumber;
}

void Fixed::setRawBits(int const rawBits)
{
	this->_fixedNumber = rawBits;
}
