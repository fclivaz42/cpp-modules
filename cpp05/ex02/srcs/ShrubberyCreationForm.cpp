/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:40:55 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:49:23 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137)
{
	std::cout << "Should not be calling this!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	AForm(src.getName(), src.getGradeToSign(), src.getGradeToExec()), _target(src._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src) {
		AForm::operator=(src);
		this->_target = src._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	writeFile;
	std::string		path(this->_target);

	if (!this->getSignStatus())
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	writeFile.open(path.append("_shrubbery").c_str(), std::ios::out | std::ios::trunc);
	writeFile << SHRUB;
}
