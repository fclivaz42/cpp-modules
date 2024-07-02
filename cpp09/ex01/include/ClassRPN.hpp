/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassRPN.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:05 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/27 19:55:44 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSRPN_HPP
# define CLASSRPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <cstring>
#include <iostream>
#include <exception>
#include <stdexcept>

class RPN {
	public:
		static	void	Solve(std::string& ref);
};

#endif // !CLASSRPN_HPP
