/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:49 by aly               #+#    #+#             */
/*   Updated: 2021/03/17 15:53:56 by aly              ###   ########.fr       */
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
	std::cout << "Enter first name: ";
	std::getline(std::cin, contact[i].first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, contact[i].last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, contact[i].nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, contact[i].login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, contact[i].postal_address);
	std::cout << "Enter email address: ";
	std::getline(std::cin, contact[i].email_address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, contact[i].phone_number);
	std::cout << "Enter birthday: ";
	std::getline(std::cin, contact[i].birthday);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, contact[i].fav_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, contact[i].underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, contact[i].darkest_secret);
}

void	display_contact(std::string contact_data)
{
	size_t i = 0;
	size_t len = contact_data.length();
	int setw = 10 - len;
	std::cout << "|";
	if (setw > 0) {
		while (setw) {
			std::cout << " ";
			setw--;
		}
		std::cout << contact_data;
	}
	else if (setw < 0)
	{
		while (i < 9)
			std::cout << contact_data[i++];
		std::cout << ".";
	}
	else if (len == 10)
		std::cout << contact_data;
	else if (len == 0)
		std::cout << VOID;
	std::cout << "|\n";
}

void	search_contact(Annuaire *contact, int i_used)
{
	std::string user_index;

	std::cout << "PAGE INDEX ?: ";
	std::getline(std::cin, user_index);
	int i = 0;
	try
	{
		std::stoi(user_index);
	}
	catch(const std::exception& e)
	{
		std::cout << "Index invalid" << std::endl;
		return ;
	}
	if ((i > -1 && i < 8) && (i < i_used) && (i_used))
	{
		display_contact(contact[i].first_name);
		display_contact(contact[i].last_name);
		display_contact(contact[i].nickname);
		display_contact(contact[i].login);
		display_contact(contact[i].postal_address);
		display_contact(contact[i].email_address);
		display_contact(contact[i].phone_number);
		display_contact(contact[i].birthday);
		display_contact(contact[i].fav_meal);
		display_contact(contact[i].underwear_color);
		display_contact(contact[i].darkest_secret);
	}
	else
		std::cout << "Index invalid" << std::endl;
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
			if (contact->index <= 7)
				add_contact(contact, contact->index);
			else
				std::cout << "Annuaire full, reboot it." << std::endl;
			contact->index++;
		}
		else if (user_input.compare("SEARCH") == 0)
			search_contact(contact, contact->index);	
		else if (user_input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Mauvaise commande" << std::endl;
	}
	return (0);
}