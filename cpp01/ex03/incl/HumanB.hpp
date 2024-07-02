/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:52:20 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 17:36:55 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
	std::string	_name;
	Weapon*	_heldWeapon;

	public:
		HumanB(const std::string& name);
		~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& newWeapon);
};


#endif
