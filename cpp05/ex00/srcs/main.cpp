/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:39:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/28 01:12:34 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBureaucrat.hpp"

void	initTooLow()
{
	try { 
		Bureaucrat	coughingBaby("kyle", 250);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to initialize " << e.what();
	}
}

void	initTooHigh()
{
	try {
		Bureaucrat	gigaChad("Hakita", -2);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to initialize " << e.what();
	}
}

void	decrementTooMuch()
{
	Bureaucrat	guyParmelin("Guy", 149);
	
	try {
		std::cerr << guyParmelin;
		guyParmelin.decrementGrade();
		guyParmelin.decrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to decrement " << e.what();
	}
}

void	incrementTooMuch()
{
	Bureaucrat	steveJobs("Steve", 2);

	try {
		std::cerr << steveJobs;
		steveJobs.incrementGrade();
		steveJobs.incrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to increment " << e.what();
	}
}

int main(void)
{
	initTooLow();
	initTooHigh();
	decrementTooMuch();
	incrementTooMuch();
}
