/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBSP.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:15:24 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/06 21:17:04 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBSP_HPP
# define CLASSBSP_HPP

#include "ClassPoint.hpp"

class BSP{
	public:
		static bool	bsp(const Point a, const Point b, const Point c, const Point point);
		virtual ~BSP() = 0;
};
#endif // !CLASSBSP_HPP
