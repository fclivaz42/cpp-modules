/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateArray.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 23:57:08 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/13 15:26:02 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "TemplateArray.hpp"

template<class T>
Array<T>::Array(void) : _len(0), _arr(new T[0])
{
}

template<class T>
Array<T>::Array(size_t n) : _len(n), _arr(new T[n])
{
}

template<class T>
Array<T>::Array(const Array& src) : _len(src._len), _arr(new T[src._len])
{
	for (size_t i = 0; i < src._len; i++)
		this->_arr[i] = src._arr[i];
}

template<class T>
Array<T>& Array<T>::operator=(const Array& src)
{
	if (this != &src) {
		delete [] this->_arr;
		this->_len = src._len;
		this->_arr = new T[this->_len];
		for (size_t i = 0; i < this->_len; i++)
			this->_arr[i] = src._arr[i];
	}
	return *this;
}

template<class T>
T&	Array<T>::operator[](size_t n) const
{
	if (n < this->_len)
		return _arr[n];
	throw OOBException();
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_arr;
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return this->_len;
}
