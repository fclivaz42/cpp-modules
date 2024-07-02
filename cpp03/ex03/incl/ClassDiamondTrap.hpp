/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDiamondTrap.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 20:49:46 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDIAMONDTRAP_HPP
# define CLASSDIAMONDTRAP_HPP

# include "ClassScavTrap.hpp"
# include "ClassFragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;

	public:
	/*			Constructors/Destructors			*/
		DiamondTrap(const std::string &name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		~DiamondTrap(void);
	/*					Class Methods				*/
		using	ScavTrap::attack;
		void	whoAmI(void);
};

#endif
