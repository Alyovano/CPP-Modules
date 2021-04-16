/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:35:46 by aly               #+#    #+#             */
/*   Updated: 2021/04/11 01:00:39 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void		NinjaTrap::ninjaShoebox(NinjaTrap & ptr) {
	std::cout << this->_name << ".Niv" << this->_level
			<< " attaque un : NinjaTrap(" << ptr.get_name() << ")." << std::endl;
	this->_energy_points -= 25;
	std::cout << "Energie restante : " << this->_energy_points << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap & ptr) {
	std::cout << this->_name << ".Niv" << this->_level
			<< " attaque un : ClapTrap(" << ptr.get_name() << ")." << std::endl;
	this->_energy_points -= 25;
	std::cout << "Energie restante : " << this->_energy_points << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & ptr) {
	std::cout << this->_name << ".Niv" << this->_level
			<< " attaque un : ScavTrap(" << ptr.get_name() << ")." << std::endl;
	this->_energy_points -= 25;
	std::cout << "Energie restante : " << this->_energy_points << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap & ptr) {
	std::cout << this->_name << ".Niv" << this->_level
			<< " attaque un : FragTrap(" << ptr.get_name() << ")." << std::endl;
	this->_energy_points -= 25;
	std::cout << "Energie restante : " << this->_energy_points << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_name = name;
	this->_max_energy_points = 120;
	this->_energy_points = 120;
	this->_max_hit_points = 60;
	this->_hit_points = 60;
	this->_level = 1;
	this->_melee_attack_dmg = 60;
	this->_ranged_attack_dmg = 5;
	this->_armor_dmg_reduc = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructeur : NinjaTrap se reconverti en grille-pain" << std::endl;
}