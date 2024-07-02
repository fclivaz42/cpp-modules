/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassSerializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:41:42 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/14 16:57:26 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSERIALIZER_HPP
# define CLASSSERIALIZER_HPP

#include <string>
#include <stdint.h>

typedef struct s_Data {
	char			gender;
	int				age;
	std::string		name;
	struct s_Data	*child;
}	Data;

class Serializer {
	private:
		Serializer(void) {}
		Serializer(const Serializer& src) {(void)src;}
		Serializer &operator=(const Serializer& src) {(void)src; return *this;}
		~Serializer(void) {}
		
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif // !CLASSSERIALIZER_HPP
