/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:50 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/12 23:55:06 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAFORM_HPP
# define CLASSAFORM_HPP

# include "ClassBureaucrat.hpp"
# include <exception>
# include <iostream>
# include <ostream>
# include <string>

class AForm {
	private:
		bool				_signed;
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:
		AForm(void);
		AForm(const std::string& name, int gradeToSign, int gradeToExec);
		AForm(const AForm &src);
		AForm& operator=(const AForm &src);
		virtual ~AForm();
		const std::string	getName() const;
		bool				getSignStatus() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				beSigned(Bureaucrat &signer);
		virtual void		execute(Bureaucrat const &executor) const = 0;

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
	class UnsignedFormException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("is not signed");
			}
		};

};

std::ostream&	operator<<(std::ostream &o, AForm const& src);

#endif
