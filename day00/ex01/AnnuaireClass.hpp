/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnnuaireClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:39:54 by aly               #+#    #+#             */
/*   Updated: 2021/03/11 12:06:16 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRECLASS_H
# define ANNUAIRECLASS_H
#include <iostream>
#include <stdio.h>
#include <string>

class Annuaire {

public:

	Annuaire(void);
	~Annuaire(void);

	std::string first_name;
	std::string last_name;
	std::string nickname;
	int			index;
};

#endif