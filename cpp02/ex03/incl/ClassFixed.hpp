/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassFixed.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:42:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:06:31 by fclivaz          ###   LAUSANNE.ch       */
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
	/*			Constructors/Destructors			*/
		Fixed(void);
		Fixed(const int init);
		Fixed(const float init);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed&	operator=(const Fixed &src);
	/*				Operator Overloads				*/
		Fixed	operator+(const Fixed &src) const;
		Fixed	operator-(const Fixed &src) const;
		Fixed	operator*(const Fixed &src) const;
		Fixed	operator/(const Fixed &src) const;
		Fixed	operator++(int);
		Fixed&	operator++(void);
		Fixed	operator--(int);
		Fixed&	operator--(void);
		bool	operator>(const Fixed &src) const;
		bool	operator>=(const Fixed &src) const;
		bool	operator<(const Fixed &src) const;
		bool	operator<=(const Fixed &src) const;
		bool	operator==(const Fixed &src) const;
		bool	operator!=(const Fixed &src) const;
	/*					Class Methods				*/
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);
	/*				Static Class Methods			*/
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &src);

#endif
