/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:27:08 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/03 21:01:50 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBaseABC.hpp"

Base*	generate(void);
void identify(Base* p);
void identify(Base& p);

int main (void)
{
	srand(time(0));
	Base* base1 = generate();
	Base* base2 = generate();
	Base* base3 = generate();

	std::cout << "--- Bases generated. Identifying...\n";

	identify(base1);
	identify(base2);
	identify(base3);
	identify(*base1);
	identify(*base2);
	identify(*base3);
	std::cout << "--- :steamhappy:\n";

	delete base1;
	delete base2;
	delete base3;

	return 0;
}
