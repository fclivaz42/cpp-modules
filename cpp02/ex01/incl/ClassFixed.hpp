/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassFixed.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:42:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:06:40 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSFIXED_HPP
# define CLASSFIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
	int					_fixedNumber;
	const static int	_fixedPoint = 8;

	public:
		Fixed(void);
		Fixed(const int init);
		Fixed(const float init);
		Fixed(Fixed const &src);
		Fixed& operator=(const Fixed &src);
		~Fixed(void);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &src);

#endif
