/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/13 16:48:31 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"


int 		main() {
	Bureaucrat BOSS("Boss", 1);
	Intern	stagiaire;
	Form	*rff;

// MANDATATE
	{
		rff = stagiaire.makeForm("robotomy request", "Bender");
		rff->beSigned(BOSS);
		BOSS.executeForm(*rff);
	}
	// FALSE FORM
	try
	{
		rff = stagiaire.makeForm("", "");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		rff = stagiaire.makeForm("test", "a");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		rff = stagiaire.makeForm("jghfds", "b");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		rff = stagiaire.makeForm("agdhhfghgf", "gdggf");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		rff = stagiaire.makeForm("", "jghfds");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	// Other goods forms

	rff = stagiaire.makeForm("shrubbery creation", "House");
	rff->beSigned(BOSS);
	BOSS.executeForm(*rff);

	rff = stagiaire.makeForm("presidential pardon", "Random target");
	rff->beSigned(BOSS);
	BOSS.executeForm(*rff);
}