/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassClapTrap.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:41:33 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCLAPTRAP_HPP
# define CLASSCLAPTRAP_HPP

# include <string>
# include <iostream>
# define uint unsigned int

class ClapTrap {
	protected:
		int			_hp;
		int			_ep;
		int			_atkdmg;
		std::string	_name;
		ClapTrap(void);
		
	public:
	/*			Constructors/Destructors			*/
		ClapTrap(const std::string &name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(const ClapTrap &src);
		~ClapTrap(void);
	/*					Class Methods				*/
		void	attack(const std::string &target);
		void	takeDamage(uint amount);
		void	beRepaired(uint amount);
};

#endif
