/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:49:48 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:41:26 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassMateriaCure.hpp"
#include "../incl/ClassICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
//	std::cout << "Cure constructor called.\n";
}

Cure::Cure(const Cure &src) : AMateria(src._type)
{
//	std::cout << "Cure copy Constructor Called\n";
}

Cure& Cure::operator=(const Cure &src)
{
//	std::cout << "Cure = operator called.\n";
	if (this != &src)
		*this = src;
	return *this;
}

Cure::~Cure(void)
{
//	std::cout << "Cure destroyed.\n";
}

AMateria*	Cure::clone(void) const
{
	AMateria* ret = new Cure();
	return ret;
}

void	Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << "'s wounds!\n";
}
