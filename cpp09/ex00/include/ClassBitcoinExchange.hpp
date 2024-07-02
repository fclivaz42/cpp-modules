/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBitcoinExchange.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:01:50 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/26 01:12:02 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBITCOINEXCHANGE_HPP
# define CLASSBITCOINEXCHANGE_HPP

#include <exception>
#include <iostream>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ios>
#include <map>

class BtcEx {
	private:
		std::map<std::string, float>	_btc;
		const std::string				_path;
		BtcEx(void);
		void	print_valmult(const std::string& ref, const float amt);

	public:
		BtcEx(const std::string& path);
		BtcEx(const BtcEx& src);
		BtcEx&	operator=(const BtcEx& src);
		~BtcEx(void);
		void	run(std::ifstream& txt);
		void	init(void);
};

# ifndef DEBUG
#  define DEBUG 0
# endif

#endif // !CLASSBITCOINEXCHANGE_HPP
