/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:59:22 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 16:12:18 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main () {
	span tab(5);

	tab.addNumber(6);
	tab.addNumber(7);
	tab.addNumber(8);
	tab.addNumber(9);
	tab.addNumber(10);

	try
	{
		tab.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Out of range" <<'\n';
	}

	std::cout << tab.getValue(0) << std::endl;
	std::cout << tab.getValue(1) << std::endl;
	std::cout << tab.getValue(2) << std::endl;
	std::cout << tab.getValue(3) << std::endl;
	std::cout << tab.getValue(4) << std::endl;

	return EXIT_SUCCESS;
}