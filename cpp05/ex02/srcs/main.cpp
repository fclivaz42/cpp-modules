/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:39:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/30 21:53:33 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassBureaucrat.hpp"
#include "../include/ClassPresidentialPardonForm.hpp"
#include "../include/ClassShrubberyCreationForm.hpp"
#include "../include/ClassRobotomyRequestForm.hpp"

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
	Bureaucrat	smol("mvillarr", 149);
	Bureaucrat	medium("rrouille", 75);
	Bureaucrat	big("fclivaz", 2);
	AForm*		smallForm = new ShrubberyCreationForm("house");
	AForm*		midForm = new RobotomyRequestForm("ilyanar");
	AForm*		bigForm = new PresidentialPardonForm("rude-jes");

	std::cout << "-----------------------------------------------------------\n";
	try {
		smallForm->beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << smallForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		smallForm->beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << smallForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		smallForm->beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << smallForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm->beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << midForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm->beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << midForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		midForm->beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << midForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm->beSigned(smol);
	}
	catch (const std::exception& e) {
		std::cerr << smol.getName() << " cannot sign form " << bigForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm->beSigned(medium);
	}
	catch (const std::exception& e) {
		std::cerr << medium.getName() << " cannot sign form " << bigForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	try {
		bigForm->beSigned(big);
	}
	catch (const std::exception& e) {
		std::cerr << big.getName() << " cannot sign form " << bigForm->getName() << " because its grade is " << e.what() << "!\n";
	}
	std::cout << "-----------------------------------------------------------\n";
	std::cout << smol;
	std::cout << medium;
	std::cout << big;
	std::cout << *smallForm;
	std::cout << *midForm;
	std::cout << *bigForm;
	std::cout << "-----------------------------------------------------------\n";
	smol.executeForm(*smallForm);
	smol.executeForm(*midForm);
	smol.executeForm(*bigForm);
	medium.executeForm(*smallForm);
	medium.executeForm(*midForm);
	medium.executeForm(*bigForm);
	big.executeForm(*smallForm);
	big.executeForm(*midForm);
	big.executeForm(*bigForm);
	delete smallForm;
	delete midForm;
	delete bigForm;
}

int main(void)
{
	initTooLow();
	initTooHigh();
	decrementTooMuch();
	incrementTooMuch();
	signForms();
}
