/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:05:10 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 20:05:31 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::advert() {
	std::cout << "<" << this->_name << "/" << this->_type << ">"; 
	std::cout << "Braiiiinnnnnsssss..." << std::endl;
}

void	Zombie::announce() {
	std::cout << "Hi, im a zombie, my name is " << this->_name;
	std::cout << "and my type is <" << this->_type << ">" << std::endl; 
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}

Zombie::Zombie() {}

Zombie::~Zombie() {}
