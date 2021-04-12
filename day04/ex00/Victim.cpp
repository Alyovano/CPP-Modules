/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:39:25 by aly               #+#    #+#             */
/*   Updated: 2021/04/12 14:56:13 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

std::string			Victim::get_name(void) const {
	return (this->_name);
}

Victim::Victim(std::string name) {
	this->_name = name;
	std::cout << "A random victim called "
		<< this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "The victim "<< this->_name 
		<<  " died for no apparent reasons!" << std::endl;
}

std::ostream &		operator<<(std::ostream & output, const Victim & x)
{
	output << "I am " << x.get_name() << ", " 
			<< ", and I like otters!" << std::endl;
	return (output);
}
