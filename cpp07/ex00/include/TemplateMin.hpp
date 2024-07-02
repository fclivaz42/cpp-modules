/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateMin.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 03:19:17 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/12 21:18:19 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEMIN_HPP
# define TEMPLATEMIN_HPP

template<typename T>
const T&	min(const T& a, const T& b)
{
	return (b <= a ? b : a);
}

#endif // !TEMPLATEMIN
