/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:03:53 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:03:53 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::~Enemy() {
}

Enemy::Enemy(int hp, std::string const & type) {
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy & x) {
	*this = x;
}

Enemy &		Enemy::operator=(const Enemy & x) {
	if (this != &x) {
		this->_hp = x.getHP();
	}
    return *this;
}

std::string		Enemy::getType() const {
	return _type;
}

int		Enemy::getHP() const {
	return _hp;
}

void Enemy::takeDamage(int dmg) {
	if (dmg <= 0)
		return ;
	_hp -= dmg;
	if (_hp <= 0) {
		std::cout << this->getType() << " : est mort" << std::endl;
	}
}
