/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:08 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 14:23:41 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	if (this->_my_weapon->getType() == "")
		std::cout << this->_name << " have no weapon." << std::endl;
	else	
		std::cout << this->_name << " attacks with his " 
						<< this->_my_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string user_name, Weapon & user_weapon)
{
	this->_my_weapon = &user_weapon;
	this->_name = user_name;
}

HumanA::~HumanA()
{
}