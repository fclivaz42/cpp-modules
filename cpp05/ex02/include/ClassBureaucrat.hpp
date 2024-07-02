/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBureaucrat.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:50 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:31:10 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBUREAUCRAT_HPP
# define CLASSBUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <ostream>
# include <string>

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat& operator=(const Bureaucrat &src);
		~Bureaucrat();
		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm& toSign);
		void				executeForm(AForm const &form);

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

std::ostream&	operator<<(std::ostream &o, Bureaucrat const& src);

#endif
