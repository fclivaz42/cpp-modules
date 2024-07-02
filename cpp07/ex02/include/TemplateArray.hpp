/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateArray.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 23:28:37 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/13 15:31:34 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEARRAY_HPP
# define TEMPLATEARRAY_HPP

#include <cstddef>
#include <exception>

template<typename T>
class Array {
	private:
	size_t	_len;
	T*		_arr;
		
	public:
		Array(void);
		~Array(void);
		Array(size_t n);
		Array(const Array &src);
		Array&	operator=(const Array &src);
		T&		operator[](size_t n) const;
		size_t	size(void) const;

	class OOBException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return("Index Out Of Bounds\n");
		}
	};
};

#endif // !TEMPLATEARRAY_HPP
