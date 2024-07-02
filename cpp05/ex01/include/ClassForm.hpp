/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassForm.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:50 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 17:44:01 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSFORM_HPP
# define CLASSFORM_HPP

# include "ClassBureaucrat.hpp"
# include <exception>
# include <iostream>
# include <ostream>
# include <string>

class Form {
	private:
		bool				_signed;
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:
		Form(void);
		Form(const std::string& name, int gradeToSign, int gradeToExec);
		Form(const Form &src);
		Form& operator=(const Form &src);
		~Form();
		const std::string	getName() const;
		bool				getSignStatus() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				beSigned(Bureaucrat &signer);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("is too high");
			}
		};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("is too low");
			}
		};
};

std::ostream&	operator<<(std::ostream &o, Form const& src);

#endif
