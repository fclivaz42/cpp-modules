/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:54:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 18:30:03 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

class Brain {
	private:
		std::string	_ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		virtual ~Brain(void);
		std::string	getIdea(int id);

};
#endif
