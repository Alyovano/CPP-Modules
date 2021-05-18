/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:59:11 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 16:10:47 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
//getteurs
int		span::getValue(unsigned int index) {
	if (index <= _max_range)
		return _tab[index];
	else
		std::cout << index << " : doens't exist" << std::endl;
	return EXIT_FAILURE;
}


void	span::addNumber(int nb) {
	if (_index <= _max_range) {
		_tab[_index] = nb;
		_index++;
	}
	else
		throw std::exception();
}

span::span(unsigned int nb) {
	_index = 0;
	if (nb == 0)
		throw std::exception();
	_max_range = nb - 1;
	_tab = new int[nb];
}

span::~span() {
}

span::span(const span & x) {
	*this = x;
}

span&		span::operator=(const span & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
