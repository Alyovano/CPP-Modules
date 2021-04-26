/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:34:54 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/25 19:07:40 by alyovano         ###   ########.fr       */
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
