/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 05:16:13 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/18 16:49:46 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TemplateIter.hpp"
#include "../include/TemplateAdd.hpp"
#include "../include/TemplatePrint.hpp"
#include "../include/TemplateSubtract.hpp"

int main (void)
{
	int arr1[] = {1, 2, 4, 42, 420, 4096, -12};
	float arr2[] = {1, 2, 4, 42, -12, 125, 6};

	std::cout << "Arr 1:\n";
	iter(arr1, 7, print<const int>);
	std::cout << "\n------------\n";
	iter(arr1, 7, add<int>);
	iter(arr1, 7, print<const int>);
	std::cout << "\n------------\n";
	std::cout << "Arr 2:\n";
	iter(arr2, 7, print<const float>);
	iter(arr2, 7, subtract<float>);
	std::cout << "\n------------\n";
	iter(arr2, 7, print<const float>);
	std::cout << "\n------------\n";

	return 0;
}
