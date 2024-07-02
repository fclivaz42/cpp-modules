/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBaseABC.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:22:27 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/03 20:40:43 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBASEABC_HPP
# define CLASSBASEABC_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual	~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif // !CLASSBASEABC_HPP
