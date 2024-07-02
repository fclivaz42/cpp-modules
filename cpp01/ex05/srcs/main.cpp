/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:09:00 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/30 16:36:00 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

int main(void)
{
	Harl		output;
	std::string	buf;
	
	std::cout << "Inline tests incoming!\n";
	output.complain("debug");
	output.complain("info");
	output.complain("warning");
	output.complain("error");
	while (!std::cin.eof()) {
		std::cout << "Log Level >> ";
		std::getline(std::cin, buf);
		if (!buf.compare("exit"))
			return 0;
		output.complain(buf);
	}
}
