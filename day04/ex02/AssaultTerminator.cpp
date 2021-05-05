/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:33:26 by aly               #+#    #+#             */
/*   Updated: 2021/05/04 14:33:28 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine* AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. Purify it !" << std::endl;
}
void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attaque with chainfists *" << std::endl;
}

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & x) {
	*this = x;
}

AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator & x) {
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
