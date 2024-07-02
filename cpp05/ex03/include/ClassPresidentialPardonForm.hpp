/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPresidentialPardonForm.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:38:02 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:49:43 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPRESIDENTIALPARDONFORM_HPP
# define CLASSPRESIDENTIALPARDONFORM_HPP

# include "ClassAForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm  &src);
		PresidentialPardonForm  &operator=(const PresidentialPardonForm  &src);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const &executor) const;

};

#endif
