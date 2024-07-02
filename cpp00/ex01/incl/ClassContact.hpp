/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:33 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 20:53:49 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	_Number;
		std::string	_FName;
		std::string	_LName;
		std::string	_NName;
		std::string	_Secret;
		std::string UserInput(const std::string &text);

	public:
		char		init;
		Contact(void);
		~Contact(void);
		void		CreateContact(void);
		/* Getters and setters istg... */
		std::string	GetFName(void);
		std::string	GetLName(void);
		std::string	GetNName(void);
		std::string	GetNumber(void);
		std::string	GetSecret(void);
};

#endif
