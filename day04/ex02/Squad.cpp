/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:00:31 by aly               #+#    #+#             */
/*   Updated: 2021/04/27 00:12:32 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int		Squad::getCount() const {
	return _count;
}

ISpaceMarine* 	Squad::getUnit(int i) const {
	(void)i;
	return 0;
}

int Squad::push(ISpaceMarine * x) {
	(void)x;
	return 0;
}

Squad::Squad(const Squad & x) {
	*this = x;
}

Squad&		Squad::operator=(const Squad & x) {
	if (this != &x) {
		this->_count = x._count;
	}
    return *this;
}

Squad::Squad() {
}

Squad::~Squad() {
}
