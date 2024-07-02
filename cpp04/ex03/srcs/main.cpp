/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:12:17 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:53:38 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "../incl/ClassMateriaCure.hpp"
# include "../incl/ClassMateriaIce.hpp"
# include "../incl/ClassCharacter.hpp"
# include "../incl/ClassMateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("fclivaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	Character* bob2 = new Character("bob2");
	bob2->equip(src->createMateria("ice"));
	bob2->equip(src->createMateria("ice"));
	ICharacter* jesus = new Character("Jesus");
	bob2->unequip(1);
	ICharacter*	jack = new Character(*bob2);
	bob2->unequip(0);
	me->use(0, *bob);
	me->use(1, *jesus);
	bob->equip(src->createMateria("ice"));
	bob->use(0, *jack);
	jack->use(0, *bob);
	jesus->equip(src->createMateria("cure"));
	jesus->use(0, *jack);
	delete src;
	delete bob;
	delete bob2;
	delete me;
	delete jesus;
	delete jack;
	return 0;
}
