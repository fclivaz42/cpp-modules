/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateIter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 05:16:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/18 16:45:16 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEITER_HPP
# define TEMPLATEITER_HPP

#include <cstddef>

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T &n) )
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T const &n) )
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif //
