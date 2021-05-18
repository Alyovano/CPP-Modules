/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:46:49 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 15:45:10 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int			main () {

	std::cout << "VECTOR TESTS" << std::endl;

	std::vector<int> tab;
	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);
	tab.push_back(4);
	tab.push_back(5);
	tab.push_back(6);
	tab.push_back(775454657);
    tab.push_back(544);
    tab.push_back(999);
    tab.push_back(189);
    tab.push_back(17);
	std::cout << tab.size() << std::endl;
	try
	{
		std::cout << "Value: " << easyfind(tab, 69) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}
	try
	{
		std::cout << "Value: " << easyfind(tab, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}
	try
	{
		std::cout << "Value: " << easyfind(tab, 7) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}
	try
	{
		std::cout << "Value: " << easyfind(tab, 4446) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}
	try
	{
		std::cout << "Value: " << easyfind(tab, 78754) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}
	try
	{
		std::cout << "Value: " << easyfind(tab, 8576) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index isn't in the tab" << std::endl;
	}

	std::cout << "LIST TESTS" << std::endl;

	std::list<int> tab_list;
	std::cout << "before" << tab_list.size() << std::endl;
	tab_list.begin();
	tab_list.push_back(56);
	tab_list.push_back(78);
	tab_list.push_back(888);
	tab_list.push_back(544);

	std::list<int>::iterator it = tab_list.begin();
	while (it != tab_list.end()) {
		std::cout << (*it) << std::endl;
		it++;
	}
	easyfind(tab_list, 544);
}