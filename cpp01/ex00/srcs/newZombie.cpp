/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:04:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:04:51 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.h"

Zombie*	newZombie(std::string name)
{
	Zombie*	heap;

	heap = new Zombie(name);
	return heap;
}
