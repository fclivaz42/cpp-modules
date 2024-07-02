/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:22 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/29 03:44:00 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassPmergeMe.hpp"

int main (int ac, char *av[])
{
	char			*prt;
	long			nbr;
	clock_t			time1, time2;

	if (ac < 3) {
		std::cerr << "Nothing to sort.\n";
		return 1;
	}
	for (int i = 1; i < ac; i++)
	{
		nbr = strtol(av[i], &prt, 10);
		if (nbr > INT_MAX || nbr <= 0 || prt[0] !=0) {
			std::cerr << av[i] << " is not an positive integer.\n";
			return 2;
		}
	}
	std::string	args = av[1];
	for (int i = 2; i < ac; i++) {
		args.push_back(' ');
		args += av[i];
	}
	std::cout << "Before:		" << args << "\n";
	time1 = PMergeMe::sortVector(args);
	if (time1 < 0) {
		return 3;
	}
	time2 = PMergeMe::sortList(args);
	std::cout << "Time to sort " << (ac - 1) << "	elements with std::vector 	-> " << 1000 * static_cast<double>(time1) / CLOCKS_PER_SEC << "ms\n";
	std::cout << "Time to sort " << (ac - 1) << "	elements with std::list		-> " << 1000 * static_cast<double>(time2) / CLOCKS_PER_SEC << "ms\n";
	return 0;
}
