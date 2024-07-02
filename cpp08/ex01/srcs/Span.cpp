/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:25:33 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/20 20:06:06 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassSpan.hpp"
	
Span::Span() {}

Span::~Span() {}

Span::Span(const Span &src): _n(src._n), _maxsize(src._maxsize)
{}

Span::Span(const unsigned int n): _n(), _maxsize(n)
{}

Span&	Span::operator=(const Span& src)
{
	if (this != &src)
	{
		this->_n = src._n;
		this->_maxsize = src._maxsize;
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_n.size() < this->_maxsize) {
		this->_n.push_back(n);
		return;
	}
	throw TMIException();
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_n.size() < 2)
		throw CannotSpanException();

	int itS = *std::min_element(this->_n.begin(), this->_n.end());
	int itB = *std::max_element(this->_n.begin(), this->_n.end());

	return (itB - itS);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_n.size() < 2)
		throw CannotSpanException();

	unsigned int	diff = UINT_MAX;
	std::vector<int>	find(this->_n);

	std::sort(find.begin(), find.end());
	for (int i = 0; &find[i] < &find.back(); ++i)
		if (diff > labs(find[i + 1]) - labs(find[i]))
			diff = labs(find[i + 1]) - labs(find[i]);
	return diff;
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (static_cast<size_t>(std::distance(begin, end)) <= (this->_maxsize - this->_n.size())) {
		this->_n.insert(this->_n.end(), begin, end);
		return;
	}
	throw TMIException();
}
