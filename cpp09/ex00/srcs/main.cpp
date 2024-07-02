/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:02 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/29 16:56:26 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBitcoinExchange.hpp"

int main (int ac, char *av[])
{
	std::ifstream	txt;
	BtcEx	btc("./data.csv");

	try {
		btc.init();
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what();
		return 1;
	}

	if (ac != 2) {
		std::cerr << "Error: Invalid arguments.\n";
		return 1;
	}
	txt.open(av[1], std::ios::in);
	if (!txt.is_open()) {
		std::cerr << "Error: Could not open file.\n";
		return 1;
	}
	if (DEBUG)
		std::cout << "------------------------------\n";
	btc.run(txt);
	return 0;
}
