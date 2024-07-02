/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassRobotomyRequestForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:38:02 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:49:16 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSROBOTOMYREQUESTFORM_HPP
# define CLASSROBOTOMYREQUESTFORM_HPP

# include "ClassAForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm {
	private:
		std::string	_target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm  &src);
		RobotomyRequestForm  &operator=(const RobotomyRequestForm  &src);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &executor) const;

};

#endif
