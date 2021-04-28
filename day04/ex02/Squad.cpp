/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:00:31 by aly               #+#    #+#             */
/*   Updated: 2021/04/28 18:04:26 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
// gestion de la liste chainee

int		Squad::check_presence(ISpaceMarine * x) {
	lst *tmp;

	tmp = _squad;
	while (tmp) {
		if (x == tmp->solider) {
		 	return -1;
		}
		tmp = tmp->next;
	}
	return 0;
}

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
	return tmp;
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

int Squad::push(ISpaceMarine * x) {
	lst *tmp;

	if (!x) {
		std::cout << "Soldat inexistant" << std::endl;
		return -1;
	}
	if (check_presence(x) == -1) {
		std::cout << "Soldat deja existant dans le bataaaaaaaaaillon"
				<< std::endl;
		return -1;
	}
	tmp = _squad;
	if (_count != 0)
		_squad = Last_solider();
	_squad->next = lst_new_solider(x);
	if (_count != 0)
		_squad = tmp;
	_count += 1;
	return 0;
}

int		Squad::getCount() const {
	return _count;
}

ISpaceMarine* 	Squad::getUnit(int i) const {
	lst *tmp = _squad;
	int j = 0;
	if ((i >= _count) || (i < 0)) {
		std::cout << "Cette unite n'est pas dans bataillon" 
			<< " : Renvoie du dernier soldat liste" << std::endl;
		i = (_count - 1);
	}
	while (tmp && tmp->next) {
		if (j == i)
			return tmp->next->solider;
		tmp = tmp->next;
		j++;
	}
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
	_count = 0;
}

Squad::~Squad() {
	lst *tmp = _squad;
	while (_squad) {
		delete _squad->solider;
		_squad = _squad->next;
	}
	_squad = tmp;
	delete _squad;
}
