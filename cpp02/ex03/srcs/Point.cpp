/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:33:34 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/21 20:14:19 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassPoint.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const float x1, const float y1) : x(x1), y(y1)
{}

Point::Point(const Point& src) : x(src.x), y(src.y)
{}

Point&	Point::operator=(const Point& src)
{
	(void)src;
	return (*this);
}

Point::~Point()
{}

bool	Point::operator==(const Point& src)
{
	return ((src.x == this->x) && (src.y == this->y));
}

bool	Point::operator==(const Point& src) const
{
	return ((src.x == this->x) && (src.y == this->y));
}

const Fixed& Point::getX(void) const
{
	return x;
}
const Fixed& Point::getY(void) const
{
	return y;
}
