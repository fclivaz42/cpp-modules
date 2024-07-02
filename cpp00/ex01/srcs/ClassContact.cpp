/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:27:22 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/26 18:26:58 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassContact.hpp"

Contact::Contact(void)
{
	this->init = 0;
}

Contact::~Contact(void)
{
}

std::string	Contact::UserInput(const std::string &text)
{
	std::string	buf;
	
	while (!std::cin.eof())
	{
		std::cout << text << ": ";
		std::getline(std::cin, buf);
		if (!buf.empty())
			break;
		else
			std::cout << "Please input a valid " << text << "!\n";
	}
	return (buf);
}

void  Contact::CreateContact(void)
{
	this->_FName = UserInput("First name");
	this->_LName = UserInput("Last name");
	this->_NName = UserInput("Nickname");
	this->_Number = UserInput("Number");
	this->_Secret = UserInput("Darkest secret");
	this->init = 1;
}

std::string Contact::GetFName(void)
{
	return this->_FName;
}

std::string Contact::GetLName(void)
{
	return this->_LName;
}

std::string Contact::GetNName(void)
{
	return this->_NName;
}

std::string Contact::GetNumber(void)
{
	return this->_Number;
}

std::string Contact::GetSecret(void)
{
	return this->_Secret;
}
