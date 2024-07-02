/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaCure.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:21:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/20 19:39:46 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSMATERIACURE_HPP
# define CLASSMATERIACURE_HPP

# include "ClassAMateria.hpp"

class Cure: public AMateria {
	public:
		Cure(void);
		Cure(const Cure &src);
		Cure &operator=(const Cure &src);
		~Cure(void);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
