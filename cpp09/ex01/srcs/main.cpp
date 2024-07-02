/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:12 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/27 16:47:31 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassRPN.hpp"

int main (int ac, char *av[])
{
	if (ac < 2) {
		std::cerr << "Not enough arguments.\n";
		return 1;
	}
	std::string	args = av[1];
	for (int i = 2; i < ac; i++) {
		args.push_back(' ');
		args += av[i];
	}
	try {
		RPN::Solve(args);
	} catch (std::exception &e) {
		std::cerr << "Unable to solve: " << e.what();
		return 1;
	}
	return 0;
}
