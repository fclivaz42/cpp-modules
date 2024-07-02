/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:41:49 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/18 19:51:33 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/TemplateEasyfind.hpp"
#include <vector>
#include <list>

int main (void)
{
//	std::vector<int>	lst;
	std::list<int>		lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(42);
	lst.push_back(69);
	lst.push_back(-999);
	lst.push_back(123123);
	lst.push_back(191919);
	lst.push_back(9);
	lst.push_back(18);
	easyfind(lst, 12);
	easyfind(lst, 18);
	easyfind(lst, 1);
	easyfind(lst, -90000);
	easyfind(lst, 42);
	return 0;
}
