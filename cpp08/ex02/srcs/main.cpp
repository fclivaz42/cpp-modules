/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:27:45 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/24 16:38:16 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TemplateMutantStack.hpp"
#include <algorithm>
#include <iostream>

int main (void)
{
	MutantStack<int> brainz;

	brainz.push(1);
	brainz.push(21);
	brainz.push(3);
	brainz.push(42);
	brainz.push(-5);

	std::sort(brainz.begin(), brainz.end());

	for (int i = 0; !brainz.empty(); i++) {
		std::cout << "Element " << i << " is " << brainz.top() << "\n";
		brainz.pop();
	}
	return 0;
}
