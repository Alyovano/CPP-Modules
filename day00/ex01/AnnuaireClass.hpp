/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnnuaireClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:54 by aly               #+#    #+#             */
/*   Updated: 2021/04/27 14:07:43 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRECLASS_H
# define ANNUAIRECLASS_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h> 

#define VOID "          "
#define JUMP 1
#define NO_JUMP 2
#define ERROR -1


class Annuaire {

public:

	Annuaire(void);
	~Annuaire(void);
	void	add_contact();
	void	mini_print(int index);
	void	printer();

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday;
	std::string fav_meal;
	std::string underwear_color;
	std::string darkest_secret;
	char		check;
	void		display_contact(std::string contact_data);
	void		check_mail();
	void		check_phone_number();
	void		retry_phone();
};

#endif