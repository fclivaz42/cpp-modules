/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScavTrap.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:50:04 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSCAVTRAP_HPP
# define CLASSSCAVTRAP_HPP

# include "ClassClapTrap.hpp"
# include <string>
# include <iostream>
# define uint unsigned int

class ScavTrap : virtual public ClapTrap {
	public:
	/*			Constructors/Destructors			*/
		ScavTrap(const std::string &name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(const ScavTrap &src);
		~ScavTrap(void);
	/*					Class Methods				*/
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
