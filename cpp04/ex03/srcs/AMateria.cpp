/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:15:46 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:41:11 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassAMateria.hpp"

AMateria::AMateria (void)
{
	std::cout << "This... should not be called??\n";
}

AMateria::AMateria(const std::string &type) : _type(type)
{
//	std::cout << "AMateria String Constructor Called with type " << type << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
//	std::cout << "AMateria copy Constructor called.\n";
	*this = src;
}

AMateria&	AMateria::operator=(const AMateria& src)
{
//	std::cout << "AMateria = operator called.\n";
	if (this != &src)
		*this = src;
	return *this;
}

AMateria::~AMateria (void)
{
//	std::cout << "AMateria " << this->_type << " destroyed.\n";
}

const std::string&	AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout<< "This shouldnt pop up!\n";
}
