/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 18:32:48 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassBrain.hpp"

Brain::Brain(void)
{
	std::stringstream	out;
	std::cout << "Brain constructor called.\n";
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "This is idea number ";
		out.str(std::string());
		out << i;
		_ideas[i].append(out.str());
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called.\n";
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
}

Brain&	Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignation constructor called.\n";
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called.\n";
}

std::string	Brain::getIdea(int id)
{
	if (id < 100)
		return this->_ideas[id];
	return NULL;

}
