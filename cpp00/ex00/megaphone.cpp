/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 02:13:28 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/04 14:56:44 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>

int main(int ac, char *av[])
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int x = 1; x < ac; ++x)
	{
		for (int i = 0; i < strlen(av[x]); ++i)
			std::cout << (char)toupper(av[x][i]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
