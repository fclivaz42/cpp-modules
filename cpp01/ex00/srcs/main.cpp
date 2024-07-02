/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:17:15 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:14:50 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.h"

int	main(void)
{
	Zombie* nz;

	nz = newZombie("Brichard");
	randomChump("Jimothy");
	nz->announce();

	delete nz;
	return 0;
}
