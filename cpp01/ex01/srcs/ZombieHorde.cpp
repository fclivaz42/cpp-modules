/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:04:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:51:29 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.h"

Zombie*	ZombieHorde(int N, std::string name)
{
	Zombie*	heap = new Zombie[N];

	for (int i = 0; i < N; i++) {
		heap[i].SetNameID(name, i);
	}
	return heap;
}
