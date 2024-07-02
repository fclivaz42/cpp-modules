/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 20:29:34 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassAForm.hpp"

AForm::AForm(void) : _signed(false), _name("Default Name"), _gradeToSign(1), _gradeToExec(1)
{
	std::cout << "You should not be calling this...\n";
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec) : _signed(false), _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToExec > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if(gradeToExec < 1 || gradeToSign < 1)	
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &src) : _signed(src._signed), _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
}

AForm& AForm::operator=(const AForm &src)
{
	if (this != &src) {
		this->_signed = src._signed;
	}
	return *this;
}

AForm::~AForm()
{
}

const std::string AForm::getName(void) const
{
	return this->_name;
}

int AForm::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExec(void) const
{
	return this->_gradeToExec;
}

bool	AForm::getSignStatus(void) const
{
	return this->_signed;
}

void	AForm::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	signer.signForm(*this);
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream &o, AForm const& src)
{
	o << "Form " << src.getName() << " requires grade " << src.getGradeToSign()
	<< " to be signed and grade " << src.getGradeToExec() << " to be executed and ";
	if (src.getSignStatus())
		o << "has been signed.\n";
	else
		o << "has not been signed.\n";
	return o;
}
