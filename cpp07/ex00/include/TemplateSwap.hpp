/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateSwap.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 03:19:17 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/12 21:18:05 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATESWAP_HPP
# define TEMPLATESWAP_HPP

template<typename T>
void swap(T& a, T& b)
{
	T c;

	c = b;
	b = a;
	a = c;
}

#endif // !TEMPLATESWAP
