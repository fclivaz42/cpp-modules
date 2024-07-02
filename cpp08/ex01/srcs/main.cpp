/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:26:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/20 20:05:56 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassSpan.hpp"

int main (void)
{
	Span	sp1(15);

	sp1.addNumber(INT_MAX);
	sp1.addNumber(INT_MIN);
	sp1.addNumber(0);
	std::vector<int>	coolSwag(13, 13);
	try {
		sp1.addNumber(71);
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	std::cout << "Added a number.\n";
	try {
		sp1.addNumber(coolSwag.begin(), coolSwag.end());
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	try {
		std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp1.shortestSpan() << "\n";
	} catch (std::exception& e) {
		std::cout << e.what();
	}
	return 0;
}
