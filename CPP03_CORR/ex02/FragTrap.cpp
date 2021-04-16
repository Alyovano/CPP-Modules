/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:54 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/11 00:13:09 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

std::string		FragTrap::_attack[] = {"Coup de tete ", "Lancer de chaussures", 
	"Coup de pied retourne ", "Empoisonnement ", "Coup de fil a un ami "};

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	srand (time(NULL));
	if (this->_energy_points < 25) {
		std::cout << "Vous n'avez pas assez d'energie" << std::endl;
		return ;
	}
	std::cout << this->_name << " - Attaque : " << _attack[rand() % 5]
		<< rand() % 101 << " dommage provoques a " << target << std::endl;
	this->_energy_points -= 25;
}

// Constructeur
FragTrap::FragTrap(std::string input_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = input_name;
}

FragTrap::~FragTrap()
{
	this->_max_energy_points = 100;
	this->_energy_points = 100;
	this->_max_hit_points = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 30;
	this->_ranged_attack_dmg = 20;
	this->_armor_dmg_reduc = 5;
	std::cout << "Destructor : ";
	std::cout << "Je sens plus mes doigts... AAAHHHH mais j'ai ai pas en fait !" << std::endl;
}
