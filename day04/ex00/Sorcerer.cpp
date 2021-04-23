/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:00:52 by aly               #+#    #+#             */
/*   Updated: 2021/04/24 00:46:02 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

std::string			Sorcerer::get_name(void) const {
	return (this->_name);
}

std::string			Sorcerer::get_title(void) const {
	return (this->_title);
}

std::ostream &		operator<<(std::ostream & output, const Sorcerer & x) {
	output << "I am " << x.get_name() << ", " 
			<< x.get_title() << ", and I like ponies!" << std::endl;
	return (output);
}

Sorcerer&		Sorcerer::operator=(const Sorcerer & x) {
	if (this != &x)
	{
		this->_name = x.get_name();
		this->_title = x.get_title();
	}
	return (*this);
}

Sorcerer::Sorcerer(const Sorcerer & x) {
	*this = x;
}

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title 
			<< " is born." << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title 
	<< ", is dead." << " Consequences will never be the same !" << std::endl;
}

void 		Sorcerer::polymorph(Victim const &a) {
	a.getPolymorphed();
}
