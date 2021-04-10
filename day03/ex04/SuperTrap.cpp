/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 01:10:37 by aly               #+#    #+#             */
/*   Updated: 2021/04/11 01:45:34 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
	this->_name = name;
	this->_max_energy_points = 120;
	this->_energy_points = 120;
	this->_max_hit_points = 100;
	this->_hit_points = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 60;
	this->_ranged_attack_dmg = 20;
	this->_armor_dmg_reduc = 5;
}

SuperTrap::SuperTrap() {
}

SuperTrap::~SuperTrap()
{
}