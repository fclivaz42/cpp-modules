/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:14:15 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/20 21:06:28 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSAMATERIA_HPP
# define CLASSAMATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria {
	private:
		AMateria(void);

	protected:
		std::string	_type;

	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
		virtual ~AMateria(void);

		const std::string&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);

};

#endif
