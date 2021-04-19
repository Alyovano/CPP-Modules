/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:22:14 by aly               #+#    #+#             */
/*   Updated: 2021/04/16 16:33:05 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::get_name()
{
	std::string tmp = this->_name;
	return tmp;
}

void		ClapTrap::init_ClapTrap(void) {
	this->_max_energy_points = 50;
	this->_energy_points = 50;
	this->_max_hit_points = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 20;
	this->_ranged_attack_dmg = 15;
	this->_armor_dmg_reduc = 3;
}

ClapTrap::ClapTrap(/* args */)
{
	init_ClapTrap();
	std::cout << "Constructeur CLAPTRAP : HERITAGE" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	init_ClapTrap();
	std::cout << "Constructeur CLAPTRAP : STANDART" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructeur CLAPTRAP : HERITAGE" << std::endl;
}

void	ClapTrap::getEnergy(unsigned int amount) {
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

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "ScavTrap " << "<" << this->_name
			<< "(niv." << this->_level << ")" << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " à distance, causant " << "<" <<
						this->_ranged_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "ScavTrap " << "<" << this->_name
			<< "(niv." << this->_level << ")" << ">";
	std::cout << " attaque " << "<" << target << ">";
	std::cout << " au corps a corps, causant " << "<" <<
						this->_melee_attack_dmg << ">";
	std::cout << " points de dégâts !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
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

void	ClapTrap::beRepaired(unsigned int amount) {
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

ClapTrap::ClapTrap(const ClapTrap & x) {
	*this = x;
	std::cout << "COPY : ClapTrap constructor called" << std::endl;
}

ClapTrap&		ClapTrap::operator=(const ClapTrap & x) {
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