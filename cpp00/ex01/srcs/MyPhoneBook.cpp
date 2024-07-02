/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:03:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/26 18:58:17 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "../incl/MyPhoneBook.hpp"

int main(void)
{	
	std::string	buf;
	PhoneBook book;
	char	id = 0;

	while (!std::cin.eof()) {
		if (id >= 8)
			id = 0;
		std::cout << "Command (ADD/SEARCH/EXIT) >> ";
		std::getline(std::cin, buf);
		for (size_t x = 0; x < buf.length(); ++x){
			buf[x] = toupper(buf[x]);
		}
		if (!buf.compare("ADD")) {
			book.Add(id);
			++id;
		}
		else if (!buf.compare("SEARCH")) {
			book.Search();
		}
		else if (!buf.compare("EXIT")) {
			return(0);
		}
		else {
			std::cout << "Invalid command.\n";
		}
	}
}
