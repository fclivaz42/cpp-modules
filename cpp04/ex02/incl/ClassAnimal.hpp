/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:54:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 19:53:02 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

# include <string>
# include <iostream>
# define AMOUNT 6

 class absAnimal {
	protected:
		std::string	_type;
	
	public:
		absAnimal(void);
		absAnimal(const absAnimal &src);
		absAnimal &operator=(const absAnimal &src);
		virtual ~absAnimal(void);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;

};
#endif
