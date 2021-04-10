/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:54 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/08 17:38:51 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

std::string		FragTrap::_attack[] = {"Coup de tete ", "Lancer de chaussures", 
	"Coup de pied retourne ", "Empoisonnement ", "Coup de fil a un ami "};

void	FragTrap::getEnergy(unsigned int amount) {
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

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP niv " << this->_level << "<" << this->_name << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " à distance, causant " << "<" <<
						this->_ranged_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP niv " << this->_level << "<" << this->_name << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " au corps a corps, causant " << "<" <<
						this->_melee_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " recoit une attaque de " << amount << " dmg" << std::endl;
	amount =  amount - this->_armor_dmg_reduc;
	if (amount < 1) {
		std::cout << " : Attaque absorbee par l'armure" << std::endl;
		return ;
	}
	if (this->_hit_points == 0) {
		std::cout << this->_name << " est deja mort" << std::endl;
		return ;
	}
	if (amount >= this->_hit_points) {
		std::cout << this->_name << " est mort " << std::endl;
		this->_hit_points = 0;
	}
	if (amount < this->_hit_points) {
		this->_hit_points = this->_hit_points - amount;
		std::cout << this->_name << " recoit une attaque : ";
		std::cout << "-" << amount << " HP" << std::endl;
	}
	if (this->_hit_points - amount <= 0) {
		this->_hit_points = this->_hit_points - amount;
		std::cout << this->_name << " recoit une attaque : ";
		std::cout << "-" << amount << " HP" << std::endl;
		std::cout << this->_name << " est mort" << std::endl;
		this->_hit_points = 0;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
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
FragTrap::FragTrap(std::string input_name) :	_hit_points(100),
										 		_max_hit_points(100),
												_energy_points(100),
												_max_energy_points(100),
												_level(1),
												_melee_attack_dmg(30),
												_ranged_attack_dmg(20),
												_armor_dmg_reduc(5)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = input_name;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor : ";
	std::cout << "Je sens plus mes doigts... AAAHHHH mais j'ai ai pas en fait !" << std::endl;
}
