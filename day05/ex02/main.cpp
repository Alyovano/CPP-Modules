/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/12 19:32:53 by alyovano         ###   ########.fr       */
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

		PresidentialPardonForm tree("Metro");
		std::cout << tree;

		Bureaucrat seb("Seb", 11);
// Test des contracts
		try
		{
			one.beSigned(seb);
			one.execute(seb);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
}