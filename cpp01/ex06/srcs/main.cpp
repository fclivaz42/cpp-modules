/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:09:00 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 18:40:03 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

int main(int ac, char *av[])
{
	Harl		output;
	
	if (ac != 2) {
		output.complain("invalid");
		return 0;
	}
	output.complain(av[1]);
	return 0;
}
