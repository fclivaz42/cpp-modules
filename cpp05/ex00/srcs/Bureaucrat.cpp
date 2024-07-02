/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/28 00:58:50 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default Name"), _grade(1)
{
	std::cout << "You should not be calling this...\n";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)	
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src) {
		this->_grade = src._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if((this->_grade - 1) < 1)	
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void	Bureaucrat::decrementGrade()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const& src)
{
	o << src.getName() << " has grade " << src.getGrade() << ".\n";
	return o;
}
