/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:44:24 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:40:50 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassMateriaSource.hpp"
#include "../incl/ClassAMateria.hpp"

MateriaSource::MateriaSource() : _materias(), _inUse(0)
{
//	std::cout << "MateriaSource default Constructor called.\n";
}

MateriaSource::MateriaSource(const MateriaSource &src) : _inUse(src._inUse)
{
//	std::cout << "MateriaSource copy constructor called.\n";
	for (int i = 0; i < src._inUse; i++)
		this->_materias[i] = src._materias[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &src)
{
//	std::cout << "MateriaSource = operator called.\n";
	if (this != &src) {
		for (int i = 0; i < src._inUse; i++) {
			this->_materias[i] = src._materias[i]->clone();
			delete src._materias[i];	
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_inUse; i++)
		delete this->_materias[i];
//	std::cout << "MateriaSource deleted.\n";
}


void	MateriaSource::learnMateria(AMateria* src)
{
	if (_inUse == 4) {
		std::cout << "4 Materia are already learnt!\n";
		return;
	}
	std::cout << src->getType() << " learned in slot " << this->_inUse + 1 << ".\n";
	this->_materias[this->_inUse] = src;
	++this->_inUse;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < this->_inUse; i++) {
		if (!type.compare(this->_materias[i]->getType())) {
			return this->_materias[i]->clone();
		}
	}
	std::cout << "Materia \"" << type << "\" not found.\n";
	return 0;
}
