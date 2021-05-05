/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:54 by aly               #+#    #+#             */
/*   Updated: 2021/05/05 14:05:52 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int				Bureaucrat::getGrade() const {
	return _grade;
}

std::string		Bureaucrat::getName() const {
	return _name;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	_grade = grade;
	if (_grade > 150) {
		try
		{
			/* code */
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat & x) {
	*this = x;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
