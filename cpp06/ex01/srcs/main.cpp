/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:48:04 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/14 16:57:54 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassSerializer.hpp"
#include <iostream>

int main(void)
{
	uintptr_t	ptr = 0;
	Data		data = {'m', 25, "fclivaz", NULL};
	Data		*rep = NULL;

	std::cout << "ptr is at " << ptr << ", Data's addr is: " << &data << " and *rep is: " << rep << "\n";
	ptr = Serializer::serialize(&data);
	std::cout << "ptr is at " << ptr << ", Data's addr is: " << &data << " and *rep is: " << rep << "\n";
	rep = Serializer::deserialize(ptr);
	std::cout << "ptr is at " << ptr << ", Data's addr is: " << &data << " and *rep is: " << rep << "\n";
	std::cout << "Name: " << rep->name << ", Age: " << rep->age << "\n";
	return 0;
}
