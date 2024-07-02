/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:25:42 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/03 21:01:30 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBaseABC.hpp"

Base*	generate(void)
{
	Base*	ret = NULL;
	char base = rand() % 3;

	switch (base)
	{
		case 0:
			std::cout << "Generated a new A.\n";
			ret = new A;
			break;
		case 1:
			std::cout << "Generated a new B.\n";
			ret = new B;
			break;
		case 2:
			std::cout << "Generated a new C.\n";
			ret = new C;
			break;
	}
	return (ret);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer detected type A!\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer detected type B!\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer detected type C!\n";
	return;
}

void identify(Base& p)
{
	try {
		A&	a = dynamic_cast<A&>(p);
		std::cout << "Reference detected type A!\n";
		(void)a;
	} catch (const std::exception& e) {
		(void)e;
	}
	try {
		B&	b = dynamic_cast<B&>(p);
		std::cout << "Reference detected type B!\n";
		(void)b;
	} catch (const std::exception& e) {
		(void)e;
	}
	try {
		C&	c = dynamic_cast<C&>(p);
		std::cout << "Reference detected type C!\n";
		(void)c;
	} catch (const std::exception& e) {
		(void)e;
	}
	return ;
}
