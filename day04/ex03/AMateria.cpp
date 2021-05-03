/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:09:31 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:09:33 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

unsigned int		AMateria::getXP() const {
	return _xp;
}

std::string const & AMateria::getType() const {
	return _type;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
}

AMateria::~AMateria() {
}

// AMateria::AMateria(const AMateria & x) {
// 	*this = x;
// }

AMateria&		AMateria::operator=(const AMateria & x) {
	if (this != &x) {
		this->_xp = x.getXP();
		this->_type = x.getType();
	}
    return *this;
}
