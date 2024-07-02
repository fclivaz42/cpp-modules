/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:27:20 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:26:27 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a + d is " << a + d << std::endl;
	std::cout << "c - b is " << c - b << std::endl;
	std::cout << "b / a is " << b / a << std::endl;
	std::cout << "is a greater than b? ";
	if (a > b)
		std::cout << "Yes!\n";
	else
		std::cout << "No!\n";
	std::cout << "is a smaller than c? ";
	if (a < c)
		std::cout << "Yes!\n";
	else
		std::cout << "No!\n";
	std::cout << "is b equals to d? ";
	if (b == d)
		std::cout << "Yes!\n";
	else
		std::cout << "No!\n";
	std::cout << "max is " << Fixed::max(a, b) << std::endl;
	std::cout << "min is " << Fixed::min(a, b) << std::endl;

	return 0;
}
