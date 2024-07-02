/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:31 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:28:16 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassClapTrap.hpp"

int main(void) {

	ClapTrap	mvillarr("Maria");
	ClapTrap	ilyanar("Ilkay");

	mvillarr.attack("Ilkay");
	ilyanar.takeDamage(5);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(9);
	mvillarr.beRepaired(3);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(9000);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	ilyanar.beRepaired(1);
	return 0;
}
