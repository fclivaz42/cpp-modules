/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:19:49 by fclivaz           #+#    #+#             */
/*   Updated: 2024/05/28 20:27:46 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassScalarConverter.hpp"

int main (int ac, char *av[])
{
	if (ac != 2) {
		std::cout << "Usage: ./convert \"str_to_convert\"\n";
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}
