/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:50:40 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/12 11:51:50 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::name(std::string new_name) {
	this->_name = new_name;
	std::cout << "Ce poney s'appelle " << this->_name << std::endl;
}

void 	Pony::color(std::string new_color) {
	this->_color = new_color;
	std::cout << "Ce poney est " << this->_color << std::endl;
}

Pony::Pony() {
	std::cout << "Un poney vient de naitre" << std::endl;
}

Pony::~Pony() {
	std::cout << this->_name << " a ete supprime." << std::endl;
}