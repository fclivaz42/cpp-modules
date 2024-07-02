/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:41:40 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 20:54:01 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "ClassContact.hpp"
# include <string>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		char	_count;
		Contact _ct[8];
		void DisplayContact(int id);
		void NewLine(const std::string &separator);
		void PrintContent(const std::string &ID,
							const std::string &Name,
							const std::string &LName,
							const std::string &NName,
							const std::string &Separator);
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Search(void);
		void Add(int id);
};

#endif
