/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:02:20 by fclivaz           #+#    #+#             */
/*   Updated: 2024/06/29 03:51:06 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassPmergeMe.hpp"
#include <algorithm>
#include <iterator>

static bool	min(int x, int y)
{
	return (x < y);
}

static void	sortVectorAlgo(std::vector<int>& src)
{
	if (src.size() < 2)
		return;

	int 				big, small;
	int 				lonely = -1;
	std::vector<int>	sorting;

	if (src.size() % 2) {
		lonely = src.back();
		src.pop_back();
	}
	for (size_t i = 0; i < src.size(); i += 2)
	{
		if (src[i] < src[i + 1])
			big = src[i];
		else
			big = src[i + 1];
		if (std::find(sorting.begin(), sorting.end(), big) == sorting.end())
			sorting.push_back(big);
	}
	sortVectorAlgo(sorting);
	small = *std::min_element(src.begin(), src.end());
	src.insert(src.begin(), small);
	for (size_t i = 0; i < src.size(); ++i)
		if (src[i] != small)
			if (std::find(sorting.begin(), sorting.end(), src[i]) == sorting.end())
				sorting.insert(std::lower_bound(sorting.begin(), sorting.end(), src[i], min), src[i]);

	if (lonely > 0)
		sorting.insert(std::lower_bound(sorting.begin(), sorting.end(), lonely, min), lonely);

	src = sorting;
}

double	PMergeMe::sortVector(std::string ref)
{
	std::vector<int>	vec;
	std::string			tmp;
	clock_t				start, end;

	try {
		start = clock();
		while (ref.find(' ') > 0) {
			tmp = ref.substr(0, ref.find(' '));
			vec.push_back(static_cast<int>(strtol(tmp.c_str(), NULL, 10)));
			if (ref.find(' ') == ref.npos)
				break;
			ref = ref.substr(ref.find(' ') + 1);
		}
		for (int i = 0; &vec[i] != &(*vec.end()); i++)
			for (int j = i + 1; &vec[j] != &(*vec.end()); j++)
				if (vec[i] == vec[j])
					throw (std::invalid_argument("Duplicates found.\n"));
		sortVectorAlgo(vec);
		end = clock();
	} catch (std::exception& e) {
		std::cout << e.what();
		return -1;
	}
	std::vector<int>::iterator	it = vec.begin();
	std::cout << "Vector After:	";
	while (it != vec.end()) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
	return (end - start);
}

static void	sortListAlgo(std::list<int>& src)
{
	if (src.size() < 2)
		return;

	int 						big, small;
	int 						lonely = -1;
	std::list<int>				sorting;
	std::list<int>::iterator	iter, next;

	if (src.size() % 2) {
		lonely = src.back();
		src.pop_back();
	}
	for (iter = src.begin(); iter != src.end(); std::advance(iter, 2))
	{
		next = iter;
		std::advance(next, 1);
		if (*iter < *next)
			big = *iter;
		else
			big = *next;
		if (std::find(sorting.begin(), sorting.end(), big) == sorting.end())
			sorting.push_back(big);
	}
	sortListAlgo(sorting);
	small = *std::min_element(src.begin(), src.end());
	src.insert(src.begin(), small);
	for (iter = src.begin(); iter != src.end(); iter++)
		if (*iter != small)
			if (std::find(sorting.begin(), sorting.end(), *iter) == sorting.end())
				sorting.insert(std::lower_bound(sorting.begin(), sorting.end(), *iter, min), *iter);

	if (lonely > 0)
		sorting.insert(std::lower_bound(sorting.begin(), sorting.end(), lonely, min), lonely);

	src = sorting;
}


double	PMergeMe::sortList(std::string ref)
{
	std::list<int>				lst;
	std::list<int>::iterator	itbeg, itend, itmid;
	std::string					tmp;
	clock_t						start, end;

	try {
		start = clock();
		while (ref.find(' ') > 0) {
			tmp = ref.substr(0, ref.find(' '));
			lst.push_back(static_cast<int>(strtol(tmp.c_str(), NULL, 10)));
			if (ref.find(' ') == ref.npos)
				break;
			ref = ref.substr(ref.find(' ') + 1);
		}
		itend = lst.end();
		for (itbeg = lst.begin(); itbeg != itend; itbeg++) {
			itmid = itbeg;
			for (std::advance(itmid, 1); itmid != itend; itmid++)
				if (*itbeg == *itmid)
					throw (std::invalid_argument("Duplicates found.\n"));
		}
		sortListAlgo(lst);
		end = clock();
	} catch (std::exception& e) {
		std::cout << e.what();
		return -1;
	}
	std::list<int>::iterator	it = lst.begin();
	std::cout << "List After:	";
	while (it != lst.end()) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
	return (end - start);
}
