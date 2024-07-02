/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:52:20 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 17:33:52 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
	std::string	_name;
	Weapon& _heldWeapon;

	public:
		HumanA(const std::string& name, Weapon& startWeapon);
		~HumanA();
	void	attack(void);
	void	setWeapon(Weapon& newWeapon);
};


#endif
