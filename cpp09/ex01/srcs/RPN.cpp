/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:09 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/29 18:31:54 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassRPN.hpp"

void	RPN::Solve(std::string &ref)
{
	std::stack<int>		cont;
	std::stringstream	sstream(ref);
	std::string			opnbr;
	int					op1, op2;

	for (size_t i = 0; i < ref.length(); i++) {
		if (!strchr("0123456789 +-*/", ref[i]))
			throw(std::invalid_argument("Invalid characters detected.\n"));
		if (ref[i] != ' ' && (ref[i + 1] != ' ' && ref[i + 1] != 0))
			throw(std::invalid_argument("Integer out of bounds.\n"));
	}
	for (size_t i = 0; i < ref.length(); i++)
		while (ref[i] == ' ')
			ref.erase(i, 1);
	if (ref.length() < 3)
		throw(std::invalid_argument("Not enough operations / operands provided.\n"));
	while (sstream >> opnbr)
	{
		if (!strchr("+-*/", opnbr[0]))
			cont.push(opnbr[0] - 48);
		else {
			if (cont.empty() || cont.size() == 1)
				throw(std::invalid_argument("Invalid sequence.\n"));
			op1 = cont.top();
			cont.pop();
			op2 = cont.top();
			cont.pop();
			switch (opnbr[0]) {
				case '+':
					cont.push(op2 + op1);
					break;
				case '-':
					cont.push(op2 - op1);
					break;
				case '*':
					cont.push(op2 * op1);
					break;
				case '/':
					if (op1 == 0)
						throw(std::invalid_argument("Division by 0.\n"));
					cont.push(op2 / op1);
					break;
			}
		}
	}
	if (cont.size() == 1)
			std::cout << cont.top() << "\n";
	else
		throw (std::invalid_argument("Invalid sequence.\n"));
}
