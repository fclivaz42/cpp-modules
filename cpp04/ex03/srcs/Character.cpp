/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:37:06 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 05:50:58 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassCharacter.hpp"
#include "../incl/ClassAMateria.hpp"

Character::Character(void)
{
//	std::cout << "this should not be called either...\n";
}

Character::Character(const std::string& Name) : _inUse(0), _slots(), _dropped(NULL) , _name(Name)
{
//	std::cout << "Character String Constructor called.\n";
}

Character::Character(const Character& src) : _inUse(src._inUse), _slots(), _dropped(NULL), _name(src._name)
{
//	std::cout << "Character copy constructor called.\n";
	for (int i = 0; i < 4; i++)
		if (src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
}

Character& Character::operator=(const Character& src)
{
//	std::cout << "Character = operator called.\n";
	if (this != &src) {
		this->_name = src._name;
		for (int i = 0; i < 4; i++) {
				if (this->_slots[i]) {
					this->_slots[i] = src._slots[i]->clone();
					delete src._slots[i];
				}
		}
	}
	return *this;
}

Character::~Character()
{
	sMList	*node;
	sMList	*del;

	for (int i = 0; i < 4; i++)
		if (this->_slots[i])
			delete this->_slots[i];
	node = _dropped;
	while (node != NULL) {
		del = node;
		node = node->next;
		delete del->ptr;
		delete del;
	}
//	std::cout << "Character " << this->_name << " deleted.\n";
}

void	Character::dropMateria(AMateria *dropped)
{
	sMList *node;
	if (this->_dropped == NULL)
		this->_dropped = new sMList();
	node = this->_dropped;
	while (node->next != NULL)
		node = node->next;
	node->next = new sMList();
	node->next->ptr = dropped;
}

void	Character::unequip(int idx)
{
	if (idx >= _inUse) {
		std::cout << "There are no materia to unequip.\n";
		return;
	}
	--this->_inUse;
	this->dropMateria(_slots[idx]);
	std::cout << this->_name << " unequipped " << this->_slots[idx]->getType() << "!\n";
	this->_slots[idx] = 0;
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	if (_inUse == 4) {
		std::cout << "4 Materia are already in use!\n";
		return;
	}
	while (this->_slots[i] != 0)
		++i;
	std::cout << this->_name << " equipped " << m->getType() << " in slot " << (i + 1) << ".\n";
	this->_slots[i] = m;
	++this->_inUse;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_inUse) {
		std::cout << "Invalid Materia Slot.\n";
		return;
	}
	std::cout << this->_name;
	this->_slots[idx]->use(target);
}

const std::string& Character::getName(void) const
{
	return this->_name;
}
