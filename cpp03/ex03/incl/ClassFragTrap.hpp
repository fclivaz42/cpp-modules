/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassFragTrap.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:51:08 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSFRAGTRAP_HPP
# define CLASSFRAGTRAP_HPP

# include "ClassClapTrap.hpp"
# include <string>
# include <iostream>
# define uint unsigned int

class FragTrap : virtual public ClapTrap {
	public:
	/*			Constructors/Destructors			*/
		FragTrap(const std::string &name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(const FragTrap &src);
		~FragTrap(void);
	/*					Class Methods				*/
		void	attack(const std::string &target);
		void	highFivesGuys();
};

#endif
