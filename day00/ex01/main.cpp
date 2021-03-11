/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:49 by aly               #+#    #+#             */
/*   Updated: 2021/03/11 12:28:14 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnnuaireClass.hpp"

void	welcome(void)
{
	std::cout << "***************************************" << std::endl;
	std::cout << "******Bienvenu(e) dans l'annuaire******" << std::endl;
	std::cout << "***************************************" << std::endl;
}

void	add_contact(Annuaire *contact, int i)
{
	if (i >= 8)
	{
		std::cout << "Annuaire full" << std::endl;
		return ;
	}
	std::cout << "Enter first name: ";
	std::getline(std::cin, contact[i].first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, contact[i].last_name);
}

void	display_contact(std::string contact_data)
{
	size_t i = 0;
	size_t len = contact_data.length();
	size_t setw = 10 - len;
	std::cout << "|";
	if (setw)
	{
		while (setw) {
			std::cout << " ";
			setw--;
		}
		std::cout << contact_data;
		std::cout << "|\n";
	}
}

void	search_contact(Annuaire *contact, int i)
{
	display_contact(contact[i].first_name);
	display_contact(contact[i].last_name);
	return ;
}

int		main()
{
	std::string user_input;
	Annuaire contact[8];

	welcome();
	while (1) {
		std::cout << "Annuaire CMD: ";
		std::getline(std::cin, user_input);
		if (user_input.compare("") == 0)
			continue ;
		else if (user_input.compare("ADD") == 0)
		{
			add_contact(contact, contact->index);
			contact->index++;
		}
		else if (user_input.compare("SEARCH") == 0)
		{
			std::cout << "PAGE INDEX ?: ";
			std::getline(std::cin, user_input);
			int user_index = std::stoi(user_input);
			search_contact(contact, user_index);
		}
		else if (user_input.compare("EXIT") == 0)
		{
			std::cout << "Aurevoir" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Mauvaise commande" << std::endl;
		}
	}
	return (0);
}