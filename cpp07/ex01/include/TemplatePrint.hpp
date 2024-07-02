/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplatePrint.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:23:58 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/12 21:36:28 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEPRINT_HPP
# define TEMPLATEPRINT_HPP

#include <iostream>

template<typename T>
void	print(T& i)
{
	std::cout << i << "/";
}

#endif // !TEMPLATEPRINT_HPP
