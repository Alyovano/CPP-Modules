/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:34:54 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/26 17:20:40 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(const AWeapon & x) {
	*this = x;
}

std::string AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost() const {
	return this->_apcost;
}

int AWeapon::getDamage() const {
	return this->_damage;
}

AWeapon&		AWeapon::operator=(const AWeapon & x) {
	if (this != &x) {
		this->_apcost = x.getAPCost();
		this->_damage = x.getDamage();
		this->_name = x.getName();
	}
    return *this;
}

std::ostream &operator<<(std::ostream & out, AWeapon const & x)
{
	out << x.getName();
	return (out);
}