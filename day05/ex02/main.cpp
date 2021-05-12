/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/12 23:01:05 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "Form.hpp"

int 		main() {
		ShruberryCreationForm one("House");
		std::cout << one;

		RobotomyRequestForm two("Building");
		std::cout << two;

		PresidentialPardonForm three("Metro");
		std::cout << three;

		Bureaucrat seb("Seb", 4);
// Test des contracts
		try
		{
			one.beSigned(seb);
			two.beSigned(seb);
			three.beSigned(seb);
			seb.executeForm(one);
			seb.executeForm(two);
			seb.executeForm(three);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		// TEST SANS SIGNATURE
		{
			try {
				ShruberryCreationForm shru("test_shru");
				std::cout << shru;

				RobotomyRequestForm robo("test_robo");
				std::cout << robo;

				PresidentialPardonForm presi("test_presi");
				std::cout << presi;
				Bureaucrat max("Max", 4);
				max.executeForm(shru);
				max.executeForm(robo);
				max.executeForm(presi);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		// GRADE TOO LOW
		{
			try {
				ShruberryCreationForm shru("test_shru");
				std::cout << shru;

				RobotomyRequestForm robo("test_robo");
				std::cout << robo;

				PresidentialPardonForm presi("test_presi");
				std::cout << presi;
				Bureaucrat robert("Robert", 150);
				shru.beSigned(robert);
				robo.beSigned(robert);
				presi.beSigned(robert);
				robert.executeForm(shru);
				robert.executeForm(robo);
				robert.executeForm(presi);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
}