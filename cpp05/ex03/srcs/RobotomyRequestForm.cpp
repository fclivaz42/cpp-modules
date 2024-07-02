/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:40:55 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:49:13 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassRobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45)
{
	std::cout << "Should not be calling this!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request", 72, 45), _target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	AForm(src.getName(), src.getGradeToSign(), src.getGradeToExec()), _target(src._target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src) {
		AForm::operator=(src);
		this->_target = src._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSignStatus())
		throw AForm::UnsignedFormException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	srand(time(0));
	std::cout << "BRRRRR.... VVVRRRRRRRRRRRRRRR.... VRRRRRRRRRRRR... BRRRRR.....\n"; 
	if ((rand() % 101) < 50)
		std::cout << this->_target << ", you have been robotomized.\n";
	else
		std::cout << this->_target << ", your robotomy failed.\n";
}
