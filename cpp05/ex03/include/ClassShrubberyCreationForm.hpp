/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassShrubberyCreationForm.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:38:02 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:49:37 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSHRUBBERYCREATIONFORM_HPP
# define CLASSSHRUBBERYCREATIONFORM_HPP

# include "ClassAForm.hpp"
# include <fstream>
# include <ios>
# define SHRUB "       ,.,\n      MMMM_    ,..,\n        \"_ \"__\"MMMMM          ,...,,\n ,..., __.\" --\"    ,.,     _-\"MMMMMMM\nMMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"\n \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n        ,., _\"__ \\__./ .\"\n       MMMMM_\"  \"_    ./\n        ''''      (    )\n ._______________.-'____\"---._.\n  \\                          /\n   \\________________________/\n   (_)                    (_)"

class ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm  &src);
		ShrubberyCreationForm  &operator=(const ShrubberyCreationForm  &src);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const &executor) const;

};

#endif
