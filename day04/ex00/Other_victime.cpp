/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other_victime.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:29:49 by aly               #+#    #+#             */
/*   Updated: 2021/05/05 18:37:46 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Other_victime.hpp"

Other_victime::Other_victime(std::string name) {
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAH" << std::endl;
	this->_name = name;
}

Other_victime::Other_victime() {

}

Other_victime::~Other_victime() {
	std::cout << "Ok, i'm done." << std::endl;
}

Other_victime::Other_victime(const Other_victime & x) {
	*this = x;
}

Other_victime&		Other_victime::operator=(const Other_victime & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void Other_victime::getPolymorphed() const
{
	std::cout << this->_name 
		<< " was just polymorphed into a little monkey !" << std::endl;
}
