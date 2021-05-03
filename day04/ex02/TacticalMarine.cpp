/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:29:21 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:50:33 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

std::string		TacticalMarine::getType() const {
	return _type;
}

ISpaceMarine* TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const {
	std::cout << "For the Holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::TacticalMarine() {
	_type = "TacticalMarine";
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl; 
}

TacticalMarine::TacticalMarine(const TacticalMarine & x) {
	*this = x;
}

TacticalMarine&		TacticalMarine::operator=(const TacticalMarine & x) {
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
