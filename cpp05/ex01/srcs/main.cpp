/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:39:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 17:50:22 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBureaucrat.hpp"
#include "../include/ClassForm.hpp"

void	initTooLow()
{
	try { 
		Bureaucrat	coughingBaby("kyle", 250);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to initialize " << e.what() << "!\n";
	}
}

void	initTooHigh()
{
	try {
		Bureaucrat	gigaChad("Hakita", -2);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: Grade to initialize " << e.what() << "!\n";
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
		std::cerr << "Error: Grade to decrement " << e.what() << "!\n";
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
		std::cerr << "Error: Grade to increment " << e.what() << "!\n";
	}
}

void	signForms()
{
	Bureaucrat	smol("little", 149);
	Bureaucrat	big("larg", 2);
	Bureaucrat	medium("mid", 75);
	Form		smallForm("smallForm", 150, 150);
	Form		midForm("midForm", 75, 75);
	Form		bigForm("bigForm", 1, 1);

	std::cout << "-----------------------------------------------------------\n";
	try {
		smallForm.beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << smallForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		smallForm.beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << smallForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		smallForm.beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << smallForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm.beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << midForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm.beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << midForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm.beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << midForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm.beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << bigForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm.beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << bigForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm.beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << bigForm.getName() << " because its grade is " << e.what() << "!\n";
	}
	std::cout << "-----------------------------------------------------------\n";
	std::cout << smol;
	std::cout << medium;
	std::cout << big;
	std::cout << smallForm;
	std::cout << midForm;
	std::cout << bigForm;
}

int main(void)
{
	initTooLow();
	initTooHigh();
	decrementTooMuch();
	incrementTooMuch();
	signForms();
}
