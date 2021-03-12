/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:05:10 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/12 13:34:04 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::advert() {
	std::cout << "<" << this->_name << "/" << this->_type << ">"; 
	std::cout << "Braiiiinnnnnsssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie() {
}