/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassSpan.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:25:18 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/20 20:05:50 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSPAN_HPP
# define CLASSSPAN_HPP

#include <exception>
#include <vector>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <climits>
#include <iostream>

class Span {
	private:
		std::vector<int>	_n;
		unsigned int		_maxsize;
		Span();

	public:
		~Span();
		Span(const unsigned int);
		Span(const Span& src);
		Span&			operator=(const Span& src);
		void			addNumber(int);
		void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

	class TMIException : public std::exception {
		virtual const char *what(void) const throw() {
			return "Too many items in list!\n";
		};
	};
	class CannotSpanException : public std::exception {
		virtual const char *what(void) const throw() {
			return "Not enough items in list to Span!\n";
		};
	};
	class OOBException : public std::exception {
		virtual const char *what(void) const throw() {
			return "Index out of bounds!\n";
		};
	};
};

#endif // !CLASSSPAN_HPP
