/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:45:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:26:22 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

/* ************************************************************************** */
/*                 Constructors, destructors, all that shizaz                 */
/* ************************************************************************** */

Fixed::Fixed() : _fixedNumber(0)
{
//	std::cout << "Default constructor called.\n";
}

Fixed::Fixed(const int init) : _fixedNumber(init<<_fixedPoint)
{
//	std::cout << "Integer constructor called.\n";
}

Fixed::Fixed(const float init) : _fixedNumber(roundf(init * (1 << _fixedPoint)))
{
//	std::cout << "Floating Point constructor called.\n";
}

Fixed::Fixed(const Fixed &src)
{
//	std::cout << "Copy constructor called.\n";
	this->_fixedNumber = src._fixedNumber;
}

Fixed& Fixed::operator=(const Fixed &src)
{
//	std::cout << "Copy assignation constructor called.\n";
	if (this != &src)
		this->_fixedNumber = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
//	std::cout << "Fixed destructor called.\n";
}

/* ************************************************************************** */
/*                        Getters, Setters, whatever                          */
/* ************************************************************************** */

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
//	std::cout << "getRawBits called.\n";
	return this->_fixedNumber;
}

void Fixed::setRawBits(int const rawBits)
{
	this->_fixedNumber = rawBits;
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
/* ************************************************************************** */
/*                              Operator Overloads                            */
/* ************************************************************************** */

Fixed	Fixed::operator+(const Fixed &src) const
{
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret(*this);
	ret._fixedNumber = this->_fixedNumber++;
	return ret;
}

Fixed&	Fixed::operator++(void)
{
	++this->_fixedNumber;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);
	ret._fixedNumber = this->_fixedNumber--;
	return ret;
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixedNumber;
	return (*this);
}

bool	Fixed::operator>(const Fixed &src) const
{
	return (this->_fixedNumber > src._fixedNumber);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return (this->_fixedNumber >= src._fixedNumber);
}

bool	Fixed::operator<(const Fixed &src) const
{
	return (this->_fixedNumber < src._fixedNumber);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return (this->_fixedNumber <= src._fixedNumber);
}

bool	Fixed::operator==(const Fixed &src) const
{
	return (this->_fixedNumber == src._fixedNumber);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return (this->_fixedNumber != src._fixedNumber);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
