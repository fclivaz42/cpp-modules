/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:31 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:49:12 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDiamondTrap.hpp"

int main(void) {

	ClapTrap	mvillarr("Maria");
	ScavTrap	ilyanar("Ilkay");
	FragTrap	fclivaz("Fabien");
	DiamondTrap	smuravye("Stan");

	// ...Whatever this is.
	mvillarr.beRepaired(30);
	ilyanar.guardGate();
	mvillarr.attack("Ilkay");
	ilyanar.takeDamage(5);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	mvillarr.beRepaired(3);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	fclivaz.highFivesGuys();
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	fclivaz.highFivesGuys();
	smuravye.attack("Fabien");
	fclivaz.takeDamage(30);
	smuravye.whoAmI();
	smuravye.guardGate();
	smuravye.highFivesGuys();
	return 0;
}
