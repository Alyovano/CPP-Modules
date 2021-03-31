/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:51 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 14:39:11 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->_my_weapon->getType() == "")
		std::cout << this->_name << " have no weapon." << std::endl;
	else	
		std::cout << this->_name << " attacks with his " 
						<< this->_my_weapon->getType() << std::endl;
}

void 	HumanB::setWeapon(Weapon & user_weapon)
{
	this->_my_weapon = & user_weapon;
}

HumanB::HumanB(std::string user_name)
{
	this->_name = user_name;
}

HumanB::~HumanB()
{
}
