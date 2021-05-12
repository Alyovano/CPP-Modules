/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/12 14:08:46 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
		
	return 0;
}
