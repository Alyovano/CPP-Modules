/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnnuaireClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:58 by aly               #+#    #+#             */
/*   Updated: 2021/03/27 22:40:22 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnnuaireClass.hpp"

void	Annuaire::display_contact(std::string contact_data)
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
	if (this->check == JUMP)
		std::cout << "|\n";
}

void	Annuaire::mini_print(int index)
{
	if (this->first_name.length() == 0 
	&& this->last_name.length() == 0 
	&& this->nickname.length() == 0)
		return ;
	std::cout << "|     index|    prénom|       nom|    pseudo|" <<	std::endl;
	this->check = NO_JUMP;
	std::cout << "|         " << index;
	display_contact(this->first_name);
	display_contact(this->last_name);
	this->check = JUMP;
	display_contact(this->nickname);
}

void	Annuaire::printer()
{
	this->check = JUMP;
	this->display_contact(this->first_name);
	this->display_contact(this->last_name);
	this->display_contact(this->nickname);
	this->display_contact(this->login);
	this->display_contact(this->postal_address);
	this->display_contact(this->email_address);
	this->display_contact(this->phone_number);
	this->display_contact(this->birthday);
	this->display_contact(this->fav_meal);
	this->display_contact(this->underwear_color);
	this->display_contact(this->darkest_secret);
}

void	Annuaire::check_mail()
{
	while (this->email_address.find_first_of("@") == this->email_address.npos)
	{
		std::cout << "Mail must contains '@'" << std::endl << "Retry: ";
		std::getline(std::cin, this->email_address);
	}
}

void	Annuaire::retry_phone()
{
	std::cout << "Phone numbers must contains only numbers" << std::endl;
	std::cout << "Retry: ";
	std::getline(std::cin, this->phone_number);
	check_phone_number();
}

void	Annuaire::check_phone_number()
{
	int i = 0;
	if (this->phone_number.length() == 0)
		retry_phone();
	while (i < this->phone_number.length())
	{
		if ((char)this->phone_number[i] > '9' || (char)this->phone_number[i] < '0')
		{
			retry_phone();
			i = -1;
		}
		i++;
	}
}

void	Annuaire::add_contact()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->email_address);
	check_mail();
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone_number);
	check_phone_number();
	std::cout << "Enter birthday: ";
	std::getline(std::cin, this->birthday);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->fav_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

Annuaire::Annuaire(void) {
	this->check = 0;
}

Annuaire::~Annuaire(void) {}
