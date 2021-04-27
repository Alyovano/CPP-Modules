/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:00:31 by aly               #+#    #+#             */
/*   Updated: 2021/04/27 20:14:16 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
// gestion de la liste chainee

lst 	*Squad::Last_solider() {
	lst *tmp;

	tmp = _squad;
	while (tmp && tmp->next) {
		tmp = tmp->next;
	}
	return (tmp);
}

lst		*Squad::lst_new_solider(ISpaceMarine * x) {
	lst *tmp = new lst;
	tmp->solider = x->clone();
	tmp->next = 0;
	return 0;
}

int		Squad::lstsize() {
	int i = 0;
	lst *tmp = _squad;
	while (tmp) {
		tmp = tmp->next;
		i++;
	}
	return i;
}

// mandatate functions
int		Squad::getCount() const {
	return _count;
}

ISpaceMarine* 	Squad::getUnit(int i) const {
	lst *tmp = _squad;
	int j = 0;
	while (tmp && tmp->next) {
		if (j == i)
			return tmp->solider;
		tmp = tmp->next;
		j++;
	}
	std::cout << "Soldat " << i << " n'est pas dans le regiment." << std::endl;
	return 0;
}

int Squad::push(ISpaceMarine * x) {
	lst *tmp;

	tmp = _squad;
	_squad = Last_solider();
	_squad->next = lst_new_solider(x);
	_squad = tmp;

	_count += 1;
	return 0;
}

Squad::Squad(const Squad & x) {
	// y faut tout copier marine par marine
	*this = x;
}

Squad&		Squad::operator=(const Squad & x) {
	if (this != &x) {
		this->_count = x._count;
	}
    return *this;
}

Squad::Squad() {
	_squad = new lst;
	_squad->next = 0;
	_squad->solider = 0;
}

Squad::~Squad() {
	delete _squad;
}
