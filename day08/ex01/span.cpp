/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:24:01 by aly               #+#    #+#             */
/*   Updated: 2021/05/20 15:38:35 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void		span::printvalues() {
	for (std::list<int>::iterator it = _lst.begin();
						 it != _lst.end(); ++it) {
        std::cout << "[" << *it << "]";
	}
	std::cout << std::endl;
}

span::~span() {}

span::span(unsigned int max) {
	_actual_range = 0;
	if (max == 0)
		throw std::exception();
	_max_range = max;
}

span::span(const span & x) {
	_actual_range = 0;
	if (x._max_range == 0)
		throw std::exception();
	_max_range = x._max_range;
	std::list<int> tmp(x._lst);
	_lst = tmp;
	*this = x;
}

void		span::addNumber(int n) {
	if (_actual_range < _max_range) {
		_lst.push_back(n);
		_actual_range++;
	}
	else {
		throw AddOutOfRange();
	}
}

int			span::shortestSpan()
{
	if (_lst.size() < 2)
		throw CannotFindMinMax();

	_lst.sort();
	unsigned int	value = -1;
	//std::cout << value << std::endl;
	for (std::list<int>::iterator it = _lst.begin();
					it != --(_lst.end()); ++it) {
		std::list<int>::iterator itNext = it;
		itNext++;
		unsigned int	tmp = *itNext - *it;
		if (tmp < value)
			value = tmp;
	}
	return (value);
}

int			span::longestSpan() {
	if (_lst.size() < 2)
		throw CannotFindMinMax();
	_lst.sort();
	return abs(_lst.front() - _lst.back());
}

span&		span::operator=(const span & x) {
	if (this != &x) {
		std::list<int> tmp(x._lst);
		_lst = tmp;
	}
    return *this;
}

const char*			span::AddOutOfRange::what() const throw() {
	return ("Try to add a number of the range");
}

const char*			span::CannotFindMinMax::what() const throw() {
	return ("Only 1 or 0 member in the span");
}
