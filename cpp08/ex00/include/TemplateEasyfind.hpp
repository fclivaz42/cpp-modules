/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateEasyfind.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:41:46 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/18 18:12:38 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEEASYFIND_HPP
# define TEMPLATEEASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
void	easyfind(T& cont, int i)
{
	if (std::find(cont.begin(), cont.end(), i) != cont.end())
		std::cout << i << " exists.\n";
	else
		std::cout << i << " is absent.\n";
}

#endif // !TEMPLATEEASYFIND_HPP

