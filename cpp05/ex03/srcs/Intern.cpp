/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 23:20:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/05/01 00:15:40 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassIntern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

Intern&	Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::~Intern()
{
}

AForm*	Intern::_cPP(const std::string &target) const
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::_cRR(const std::string &target) const
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::_cSC(const std::string &target) const
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::makeForm(const std::string& name, const std::string& target)
{
	const std::string formName[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	const f form[3] = {&Intern::_cPP, &Intern::_cRR, &Intern::_cSC};

	for (int i = 0; i < 3; i++)
		if (!formName[i].compare(name)) {
			std::cout << "Intern created Form " << name << ".\n";
			return (this->*form[i])(target);
	}
	std::cout << "Error creating Form " << name << ". It does not exist!\n";
	return NULL;
}
