/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBureaucrat.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:47:50 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/28 01:06:26 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBUREAUCRAT_HPP
# define CLASSBUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <ostream>
# include <string>

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

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("is too high!\n");
			}
		};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("is too low!\n");
			}
		};
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const& src);

#endif
