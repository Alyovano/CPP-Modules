/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:48:24 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/11 00:14:35 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

std::string		ScavTrap::_challeng[] = {" bloque la porte avec son boule .", " panique et se met a hurler .", 
	" se jete par dessus bord ."};

void	ScavTrap::challengeNewcomer(void) {
	if (this->_energy_points < 1) {
		std::cout << "Vous n'avez pas assez d'energie" << std::endl;
		return ;
	}
	srand (time(NULL));
	std::cout << this->_name << _challeng[rand() % 3]
		<< std::endl;
}

// Constructeur
ScavTrap::ScavTrap(std::string input_name) {
	this->_max_energy_points = 50;
	this->_energy_points = 50;
	this->_max_hit_points = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 20;
	this->_ranged_attack_dmg = 15;
	this->_armor_dmg_reduc = 3;
	std::cout << "ScavTrap en cours de robotisation." << std::endl;
	this->_name = input_name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor : ";
	std::cout << "Mon cul a sauve tout vos culs !" << std::endl;
}
