/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:44:47 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/21 20:22:06 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassBSP.hpp"

static float calc_area(const Point& a, const Point& b, const Point& c)
{
	return	(std::abs( \
				a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + \
				b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + \
				c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) \
				* 0.5f);
}

bool	BSP::bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (point == a || point == b || point == c)
		return false;
	return (calc_area(a, b, c) == (calc_area(point, b, c) + calc_area(point, a, b) + calc_area(point, a, c)));
}
