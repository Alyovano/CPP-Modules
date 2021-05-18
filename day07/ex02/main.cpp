/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:37:18 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 13:30:48 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main() {
	int *a = new int();

	*a = 56;
	std::cout << "Array creating : "<< std::endl;

	Array <int>tab(5);
	tab[2] = 45;
	std::cout << tab[2] << std::endl;

	try
	{
		tab[6] = 45;
	}
	catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab[64] = 45;
	}
	catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab[47] = 45;
	}
	catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab[-1] = 45;
	}
	catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab[43546] = 45;
	}
	catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab[6897.321] = 45;
	}catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	
	Array <std::string> tab2(59);

	std::cout << tab2.size() << std::endl;
	tab2[3] = "COUCOUUUUUUUUUUUUUUUU";
	std::cout << tab2[3] << std::endl;
	tab2[4] = "";
	std::cout << tab2[4] << std::endl;

	try
	{
		tab2[6897.321] = 45;
	}catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
	try
	{
		tab2[41] = 69;
		std::cout << tab2[41] << std::endl;
	}catch(const std::exception& e) {std::cerr << "Overflow" << std::endl;}
}