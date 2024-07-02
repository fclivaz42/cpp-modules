/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateMutantStack.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:24:34 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/24 16:38:43 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEMUTANTSTATCK_HPP
# define TEMPLATEMUTANTSTATCK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(void) : std::stack<T>() {}
		~MutantStack(void) {}
		MutantStack(const MutantStack &src) : std::stack<T>(src) {}
		MutantStack &operator=(const MutantStack &src)
		{
			if (this != &src)
				std::stack<T>::operator=(src);
			return *this;
		}
		typename std::stack<T>::container_type::iterator begin(void)
		{
			return this->c.begin();
		}
		typename std::stack<T>::container_type::const_iterator begin(void) const
		{
			return this->c.begin();
		}
		typename std::stack<T>::container_type::iterator end(void)
		{
			return this->c.end();
		}
		typename std::stack<T>::container_type::const_iterator end(void) const
		{
			return this->c.end();
		}
};

#endif // !TEMPLATEMUTANTSTATCK_HPP
