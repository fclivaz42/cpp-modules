/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:04:21 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 19:54:29 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDog.hpp"
#include "../incl/ClassCat.hpp"

void	realAnimals()
{
//	absAnimal	blobOfCells;	// <-- doesnt work
	absAnimal* kitty = new Cat;
	Dog	doggo;
	
//	std::cout << blobOfCells.getType() << std::endl;
	std::cout << kitty->getType() << std::endl;
	std::cout << doggo.getType() << std::endl;
//	blobOfCells.makeSound();
	doggo.makeSound();
	kitty->makeSound();
	delete kitty;
}

void	fileTests(void)
{
	std::cout << "------Create Array------\n";
	const absAnimal* pets[AMOUNT] = {new Dog, new Dog, new Dog, new Cat, new Cat, new Cat};

	std::cout << "------Delete Array------\n";
	for (int i = 0; i < AMOUNT; i++) {
	  delete pets[i];
	}
}

void	testrealloc(void)
{
	std::cout << "------Mesquin------\n";
	Cat	Mesquin;
	{
		std::cout << "------Vega------\n";
		Cat Vega = Mesquin;
		Vega.printIdeas();
		std::cout << "------Vega Missile------\n";
	}
	std::cout << "------Mesquin Gros Tas------\n";
}

int main (void)
{
	std::cout << "------------- ANIMALS -------------\n";
	realAnimals();
	std::cout << "------------- FILE TESTS -------------\n";
	fileTests();
	std::cout << "------End of Deletion------\n";
	testrealloc();
	std::cout << "------------- END OF TESTS -------------\n";
	return 0;
}
