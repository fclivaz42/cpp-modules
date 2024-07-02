/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIntern.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 23:18:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/05/01 00:13:23 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSINTERN_HPP
# define CLASSINTERN_HPP

#include "ClassPresidentialPardonForm.hpp"
#include "ClassRobotomyRequestForm.hpp"
#include "ClassShrubberyCreationForm.hpp"

class Intern {
	private:
	AForm*	_cPP(const std::string& target) const;
	AForm*	_cRR(const std::string& target) const;
	AForm*	_cSC(const std::string& target) const;
		
	public:
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		~Intern();
		AForm*	makeForm(const std::string& name, const std::string& target);
	
	typedef AForm*	(Intern::*f)(const std::string&) const;
};

#endif
