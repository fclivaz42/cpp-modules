/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalarConverter.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:17:53 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/14 16:25:33 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSCALARCONVERTER_HPP
# define CLASSSCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <sys/types.h>

class ScalarConverter {
	private:
		ScalarConverter(void) {}
		ScalarConverter(const ScalarConverter &src) {(void)src;}
		ScalarConverter &operator=(const ScalarConverter &src) {(void)src; return *this;}
		~ScalarConverter(void) {}
		
	public:
	static void	convert(const std::string& ref);
};

#endif
