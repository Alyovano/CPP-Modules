/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:48:24 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/16 16:26:13 by aly              ###   ########.fr       */
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

void	ScavTrap::getEnergy(unsigned int amount) {
	if (amount >= this->_max_energy_points) {
		this->_energy_points = this->_max_energy_points;
		std::cout << this->_name << " energie restante :" << _energy_points << std::endl;
		return ;
	}
	else {
		this->_energy_points += amount;
		if (this->_energy_points > this->_max_energy_points) {
			this->_energy_points = this->_max_energy_points;
		}
		std::cout << this->_name << " energie restante :" << _energy_points << std::endl;
		return ;
	}
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "ScavTrap " << "<" << this->_name
			<< "(niv." << this->_level << ")" << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " à distance, causant " << "<" <<
						this->_ranged_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "ScavTrap " << "<" << this->_name
			<< "(niv." << this->_level << ")" << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " au corps a corps, causant " << "<" <<
						this->_melee_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " recoit une attaque de " << amount << " dmg" << std::endl;
	amount =  amount - this->_armor_dmg_reduc;
	if (amount < 1) {
		std::cout << " : Attaque absorbee par l'armure" << std::endl;
		return ;
	}
	if (this->_hit_points == 0) {
		std::cout << this->_name << " est deja cuit" << std::endl;
		return ;
	}
	if (amount >= this->_hit_points) {
		std::cout << this->_name << " est cuit " << std::endl;
		this->_hit_points = 0;
	}
	if (amount < this->_hit_points) {
		this->_hit_points = this->_hit_points - amount;
		std::cout << this->_name << " se fait rentrer dedans : ";
		std::cout << "-" << amount << " HP" << std::endl;
	}
	if (this->_hit_points - amount <= 0) {
		this->_hit_points = this->_hit_points - amount;
		std::cout << this->_name << " se fait rentrer dedans  : ";
		std::cout << "-" << amount << " HP" << std::endl;
		std::cout << this->_name << " est cuit" << std::endl;
		this->_hit_points = 0;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (amount == 0) {
		std::cout << "Le soin est insuffisant" << std::endl;
		return ;
	}
	if (amount >= this->_max_hit_points) {
		this->_hit_points = this->_max_hit_points;
		std::cout << this->_name << " recoit " << amount <<
			" de soin, il a maintenant " << this->_hit_points 
					<< " pv" << std::endl;
		return ;
	}
	if (amount + this->_hit_points <= this->_max_hit_points) {
		this->_hit_points += amount;
		std::cout << this->_name << " recoit " << amount <<
			" de soin, il a maintenant " << this->_hit_points 
					<< " pv" << std::endl;
	}
}

// Constructeur
ScavTrap::ScavTrap(std::string input_name) :	_hit_points(100),
										 		_max_hit_points(100),
												_energy_points(50),
												_max_energy_points(50),
												_level(1),
												_melee_attack_dmg(20),
												_ranged_attack_dmg(15),
												_armor_dmg_reduc(3)
{
	std::cout << "ScavTrap en cours de robotisation." << std::endl;
	this->_name = input_name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor : ";
	std::cout << "Mon cul a sauve tout vos culs !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & x) {
	*this = x;
	std::cout << "COPY : ScavTrap constructor called" << std::endl;
}

ScavTrap&		ScavTrap::operator=(const ScavTrap & x) {
	if (this != &x)
	{
		this->_name = x._hit_points;
		this->_name = x._max_energy_points;
		this->_name = x._energy_points;
		this->_name = x._max_hit_points;
		this->_name = x._level;
		this->_name = x._melee_attack_dmg;
		this->_name = x._ranged_attack_dmg;
		this->_name = x._armor_dmg_reduc;
	}
	return (*this);
}
