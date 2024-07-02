/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:45:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:25:14 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

Fixed::Fixed() : _fixedNumber(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::Fixed(const int init) : _fixedNumber(init<<_fixedPoint)
{
	std::cout << "Integer constructor called.\n";
}

Fixed::Fixed(const float init) : _fixedNumber(roundf(init * (1 << _fixedPoint)))
{
	std::cout << "Floating Point constructor called.\n";
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

int	Fixed::toInt(void) const
{
	return this->_fixedNumber>>this->_fixedPoint;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedNumber / (1 << this->_fixedPoint);
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

std::ostream&	operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
