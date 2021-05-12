/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/12 15:09:44 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int		main()
{
	    try //GradeTooHighException
        {
                Bureaucrat jim1("jim", 0);
        }
        catch (std::exception & e)
        {
                std::cerr << e.what() << '\n';
        }
		try //before Max Grade and promote until error
        {
                Bureaucrat boss("Boss", 2);
				std::cout << boss;
        }
        catch (std::exception & e)
        {
                std::cerr << e.what() << '\n';
        }
        try // before lowest grade demote until error
        {
                Bureaucrat eric("Eric", 149);
        }
        catch (std::exception & e)
        {
                std::cerr << e.what() << '\n';
        }
        try //GradeTooLowException
        {
                Bureaucrat jim("jim", 151);
        }
        catch (std::exception & e)
        {
                std::cerr << e.what() << '\n';
        }
        // Bureaucrat robert("Robert", 51);
        // Bureaucrat robert1(robert);
        // Bureaucrat robert2("Joel", 42);
        // robert2 = robert1;
		try
		{
			Bureaucrat Martin("Martin", 149);
			std::cout << Martin;
			Martin.incGrade();
			std::cout << Martin;
			Martin.decGrade();
			std::cout << Martin;
			Martin.decGrade();
			std::cout << Martin;
			Martin.decGrade();
			std::cout << Martin;
			Martin.decGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "TEST FORM " << std::endl;
		{
			try
			{
				Form test("Premier contrat", 690, 35);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				Form test("Premier contrat", 7, 335);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				Form test("Premier contrat", 0, 35);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				Form test("Premier contrat", 7, 0);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		std::cout << "Form valid" << std::endl;
		{
			try
			{
				Bureaucrat cecile("Cecile", 56);
				Form test("Valid", 56, 12);
				test.beSigned(cecile);
				std::cout << test;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
				std::cout << "Form valid 2" << std::endl;
		{
			try
			{
				Bureaucrat marco("Marco", 144);
				Form test("TOP SECRET", 3, 1);
				test.beSigned(marco);
				std::cout << test;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
		
	return 0;
}
