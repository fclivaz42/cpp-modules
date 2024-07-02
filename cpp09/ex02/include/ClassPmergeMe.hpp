/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPmergeMe.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:17 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/28 14:35:11 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPMERGEME_HPP
# define CLASSPMERGEME_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <list>
#include <set>

class PMergeMe {
	public:
		static double	sortVector(std::string ref);
		static double	sortList(std::string ref);
};

#endif // !CLASSPMERGEME_HPP
