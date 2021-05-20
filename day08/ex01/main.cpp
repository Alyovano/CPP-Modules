/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:59:22 by aly               #+#    #+#             */
/*   Updated: 2021/05/20 15:39:27 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main() {

	std::cout << "================================" << std::endl;
	std::cout << "Creation Span - size  = 6" << std::endl;
	span a(6);
	a.addNumber(5); 	// 1
	a.addNumber(6); 	// 2
	a.addNumber(7); 	// 3
	a.addNumber(8); 	// 4
	a.addNumber(9); 	// 5
	a.addNumber(10);	// 6
	a.printvalues();

	std::cout << "================================" << std::endl;
	std::cout << "Add number out of range" << std::endl;
	try
	{
		a.addNumber(10);
		a.addNumber(10);
		a.addNumber(10);
		a.addNumber(10);
		a.addNumber(10);
		a.addNumber(11);
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}


	std::cout << "================================" << std::endl;
	std::cout << "Shortest and longtest with error" << std::endl;
	span test(1);
	test.addNumber(0);
	test.printvalues();
	try
	{
		test.shortestSpan();
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}
	try
	{
		test.longestSpan();
	}
	catch(const std::exception& e) {std::cerr << e.what() << '\n';}

	std::cout << "================================" << std::endl;
	std::cout << "Shortest and longtest whitout errors" << std::endl;
	span work(9);
	work.addNumber(63);
	work.addNumber(21);
	work.addNumber(3);
	work.addNumber(45);
	work.addNumber(36);
	work.addNumber(15);
	work.addNumber(26);
	work.addNumber(8);
	work.addNumber(47);

	work.printvalues();
	std::cout << "Shortest span: " << work.shortestSpan() << std::endl;
	std::cout << "Longest span: " << work.longestSpan() << std::endl;
	work.printvalues();

	span test2 = span(work);
	std::cout << "TEST COPY" << std::endl;
	test2.printvalues();

	
}
