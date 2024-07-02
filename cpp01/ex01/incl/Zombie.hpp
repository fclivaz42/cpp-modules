/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:51:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/27 22:51:19 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string _Name;
		int			_ID;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	SetNameID(const std::string &name, int i);
		void	SetID(int N);
};

#endif
