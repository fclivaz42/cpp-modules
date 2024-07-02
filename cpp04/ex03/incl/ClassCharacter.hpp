/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:28:36 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 03:36:52 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP

# include "ClassICharacter.hpp"

typedef struct sMList {
	AMateria*		ptr;
	struct sMList	*next;
}	tMateriaList;

class Character : public ICharacter {
	private:
		int			_inUse;
		AMateria*	_slots[4];
		sMList*		_dropped;
		std::string	_name;
		Character(void);
		void	dropMateria(AMateria *dropped);
		
	public:
		Character(const std::string& Name);
		Character(const Character& src);
		Character &operator=(const Character& src);
		~Character();

		const std::string&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);


};

#endif
