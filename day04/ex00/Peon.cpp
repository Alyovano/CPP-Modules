/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:26:19 by aly               #+#    #+#             */
/*   Updated: 2021/04/24 01:26:20 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) {
	std::cout << "Zog zog." << std::endl;
	this->_name = name;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon & x) {
	*this = x;
}

Peon&		Peon::operator=(const Peon & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name 
		<< " was just polymorphed into a pink pony!" << std::endl;
}
