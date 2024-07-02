/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:04:21 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:18:40 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDog.hpp"
#include "../incl/ClassCat.hpp"
#include "../incl/ClassWrongCat.hpp"

void	realAnimals()
{
	Animal	blobOfCells;
	Cat	kitty;
	Dog	doggo;
	
	std::cout << blobOfCells.getType() << std::endl;
	std::cout << kitty.getType() << std::endl;
	std::cout << doggo.getType() << std::endl;
	blobOfCells.makeSound();
	doggo.makeSound();
	kitty.makeSound();
}

void	wrongAnimals()
{
	WrongAnimal	gears;
	WrongCat	Archie;

	std::cout << gears.getType() << std::endl;
	std::cout << Archie.getType() << std::endl;
	gears.makeSound();
	Archie.makeSound();
}

void	fileTests()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}

int main (void)
{
	std::cout << "------------- ANIMALS -------------\n";
	realAnimals();
	std::cout << "------------- WRONG ANIMALS -------------\n";
	wrongAnimals();
	std::cout << "------------- FILE TESTS -------------\n";
	fileTests();
	return 0;
}
