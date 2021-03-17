/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnnuaireClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:54 by aly               #+#    #+#             */
/*   Updated: 2021/03/17 15:37:33 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRECLASS_H
# define ANNUAIRECLASS_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h> 

#define VOID "          "

class Annuaire {

public:

	Annuaire(void);
	~Annuaire(void);

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
	int			index;
};

#endif