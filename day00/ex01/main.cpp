/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:49 by aly               #+#    #+#             */
/*   Updated: 2021/03/27 22:40:58 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnnuaireClass.hpp"

void	welcome(void)
{
	std::cout << "***************************************" << std::endl;
	std::cout << "******Bienvenu(e) dans l'annuaire******" << std::endl;
	std::cout << "***************************************" << std::endl;
}

void	search_contact(Annuaire *contact, int i_used)
{
	std::string user_index;

	for (int j = 0; j < i_used ; j++)
	{
		contact[j].mini_print(j);
		if (j == 7)
			break ;
	}
	std::cout << "PAGE INDEX ?: ";
	std::getline(std::cin, user_index);
	int i = 0;
	try
	{
		i = std::stoi(user_index);
	}
	catch(const std::exception& e)
	{
		std::cout << "Index invalid" << std::endl;
		return ;
	}
	if ((i > -1 && i < 8) && (i < i_used) && (i_used))
		contact[i].printer();
	else
		std::cout << "Index invalid" << std::endl;
}

int		main()
{
	std::string user_input;
	Annuaire contact[8];
	int i = 0;

	welcome();
	while (1) {
		std::cout << "Annuaire CMD: ";
		std::getline(std::cin, user_input);
		if (user_input.compare("") == 0)
			continue ;
		else if (user_input.compare("ADD") == 0)
		{
			if (i <= 7)
				contact[i].add_contact();
			else
				std::cout << "Annuaire full, reboot it." << std::endl;
			i++;
		}
		else if (user_input.compare("SEARCH") == 0)
			search_contact(contact, i);	
		else if (user_input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Mauvaise commande" << std::endl;
	}
	return (0);
}
