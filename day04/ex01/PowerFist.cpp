/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:04:07 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:08 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50){
}

PowerFist::~PowerFist() {
	std::cout << "PowerFirst : Destructor called" << std::endl;
}

PowerFist::PowerFist(const PowerFist & x) {
	*this = x;
}

PowerFist&		PowerFist::operator=(const PowerFist & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}