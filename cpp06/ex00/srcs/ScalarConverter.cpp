/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:19:21 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/14 16:30:09 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassScalarConverter.hpp"

void	ScalarConverter::convert(const std::string& ref)
{
	double	nbr;
	char	*ptr = NULL;

	if (ref.length() == 1 && isprint(ref[0]) && !isdigit(ref[0]))
		nbr = static_cast<double>(ref[0]);
	else
		nbr = strtod(ref.c_str(), &ptr);
	if (ptr != NULL && !(ptr[0] == 0 || ptr[0] == 'f')) {
		std::cerr << "Invalid input.\n";
		return;
	}
	if (ref.length() > 6)
		std::cout << std::setprecision(ref.length());

	std::cout << "Character : ";
	if (isprint(static_cast<char>(nbr)) && nbr < 128 && nbr > 0)
		std::cout << "'" << static_cast<char>(nbr) << "'\n";
	else
		std::cout << "Not printable.\n";

	std::cout << "Integer   : ";
	if (nbr < INT_MAX && nbr > INT_MIN)
		std::cout << static_cast<int>(nbr) << "\n";
	else
		std::cout << "Not printable.\n";

	std::cout << "Floating  : " << static_cast<float>(nbr);
	if (trunc(nbr) == nbr)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";

	std::cout << "Double    : " << nbr;
	if (trunc(nbr) == nbr)
		std::cout << ".0\n";
	else
		std::cout << "\n";
}
