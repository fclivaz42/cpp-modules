/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:27:20 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/21 20:24:05 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassPoint.hpp"
#include "../incl/ClassBSP.hpp"

int main(void)
{
	Point	a;
	Point	x(-12.2f, 4.0f);
	Point	y(5.2f, -1.0f);
	Point	z(6.0f, 6.0f);
	Point	test(3.0f, 2.9f);
	Point	test2(50.0f, 50.0f);

	std::cout << "Is test inside of the triangle...? " << (BSP::bsp(x, y, z, test)? "Yes" : "No") << "!\n";
	std::cout << "Is tes2 inside of the triangle...? " << (BSP::bsp(x, y, z, test2)? "Yes" : "No") << "!\n";
	return 0;
}
