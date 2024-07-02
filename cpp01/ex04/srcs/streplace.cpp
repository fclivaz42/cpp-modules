/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:02:00 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/07 01:44:43 by fclivaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/streplace.hpp"

int main (int ac, char *av[])
{
	std::ifstream	readFile;
	std::ofstream	writeFile;
	std::string		line, newLine, path;
	std::size_t		pos;

	if (ac != 4){
		std::cerr << "Invalid amount of arguments.\nExptected: <filename> \"str_to_replace\" \"new_str\"\n";
		return 1;
	}

	path = av[1];
	const std::string	oldstr = av[2];
	const std::string	newstr = av[3];
	
	readFile.open(path.c_str(), std::ios::in);
	if (!readFile.is_open()) {
		std::cerr << "Error opening file with path " << path << std::endl;
		return 2;
	}
	writeFile.open(path.append(".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!writeFile.is_open()) {
		std::cerr << "Error opening file with path " << path << std::endl;
		return 3;
	}
	while (getline (readFile, line))
	{
		pos = line.find(oldstr);
		if (pos == (std::size_t)-1)
			writeFile << line << "\n";
		else {
			while (pos != (std::size_t)-1)
			{
				newLine.append(line.c_str(), pos);
				newLine.append(newstr);
				line = line.substr(pos + oldstr.length());
				pos = line.find(oldstr);
			}
			newLine.append(line);
			writeFile << newLine << "\n";
			newLine.clear();
		}
	}
	return 0;
}
