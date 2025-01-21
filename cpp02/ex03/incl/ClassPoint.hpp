/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:32:40 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/21 20:14:28 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPOINT_HPP
# define CLASSPOINT_HPP

# include "ClassFixed.hpp"

class Point {
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point(void);
		Point(float x1, float y1);
		Point(const Point& src);
		Point& operator=(const Point& src);
		bool operator==(const Point& src);
		bool operator==(const Point& src) const;
		~Point(void);
		const Fixed& getX(void) const;
		const Fixed& getY(void) const;
};

#endif // !CLASSPOINT_HPP
