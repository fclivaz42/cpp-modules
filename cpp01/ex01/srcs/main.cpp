/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:17:15 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:53:07 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.h"

int	main(void)
{
	Zombie* Horde;
	int	N = 250;

	Horde = ZombieHorde(N, "Brichard");
	for (int i = 0; i < N; i++) {
		Horde[i].announce();
	}

	delete [] Horde;
	return 0;
}
