/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:06:24 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 17:59:28 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::NewLine(const std::string &separator)
{
	for (char i = 0; i < 4; i++)
	{
		for (char i = 0; i < 10; i++)
			std::cout << "─";
		if (i < 3)
			std::cout << separator;
	}
}
void	PhoneBook::PrintContent(const std::string &ID, const std::string &Name, const std::string &LName, const std::string &NName, const std::string &Separator)
{
	for (char i = 0; i < 4; i++)
	{
		if (i == 0)
			std::cout << std::setw(10) << ID << "│";
		else if (i == 1) { 
			if (Name.length() > 10)
				std::cout << std::setw(10) << Name.substr(0, 9) + ".│";
			else
				std::cout << std::setw(10) << Name << "│";
		}
		else if (i == 2) {
			if (LName.length() > 10)
				std::cout << std::setw(10) << LName.substr(0, 9) + ".│";
			else
				std::cout << std::setw(10) << LName << "│";
		}
		else if (i == 3) {
			if (NName.length() > 10)
				std::cout << std::setw(10) << NName.substr(0, 9) + ".│" << Separator;
			else
				std::cout << std::setw(10) << NName << "│" << Separator;
		}
	}
}

void	PhoneBook::DisplayContact(int id)
{
	std::cout << "\n┌──────────\n";
	std::cout << "│First Name:\t" << this->_ct[id].GetFName() << "\n";
	std::cout << "│last Name:\t" << this->_ct[id].GetLName() << "\n";
	std::cout << "│Nickname:\t" << this->_ct[id].GetNName() << "\n";
	std::cout << "│Number:\t" << this->_ct[id].GetNumber() << "\n";
	std::cout << "│Dark Secret:\t" << this->_ct[id].GetSecret() << "\n";
	std::cout << "└──────────\n\n";
}

void	PhoneBook::Search(void)
{
	std::string buf = "\n├";
	char cid[2];

	if (!this->_count) {
		std::cout << "No contacts found in phonebook.\n";
		return;
	}
	std::cout << "┌";
	NewLine("┬");
	std::cout << "┐\n│";
	PrintContent("Index", "Name", "Last Name", "Nickname", "\n├");
	NewLine("┼");
	std::cout << "┤\n│";
	for (int id = 0; id < 8; ++id)
	{
		if (!this->_ct[id].init)
			break;
		cid[0] = id + '1';
		cid[1] = 0;
		if (!this->_ct[id + 1].init)
			buf = "\n└";
		PrintContent(cid, this->_ct[id].GetFName(),this->_ct[id].GetLName(), this->_ct[id].GetNName(), buf);
		if (this->_ct[id + 1].init)
		{
			NewLine("┼");
			std::cout << "┤\n│";
		}
		else 
			NewLine("┴");
	}
	std::cout << "┘\n";
	while (!std::cin.eof()) {
		std::cout << "\nIndex of desired contact: ";
		std::getline(std::cin, buf);
		if (atoi(buf.c_str()) < 1 || atoi(buf.c_str()) > this->_count)
			std::cout << "Invalid Index.\n";
		else {
			DisplayContact(atoi(buf.c_str()) - 1);
			return;
		}
	}
}

void	PhoneBook::Add(int id)
{
	if (this->_count < 8)
		++this->_count;
	this->_ct[id].CreateContact();
}
