/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:54 by aly               #+#    #+#             */
/*   Updated: 2021/05/12 22:48:54 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::executeForm (Form const & form) {
	if (form.getGradetoexec() >= this->getGrade()) {
		std::cout << this->getName() << " : Execute le contract : "
			<< form.getName() << std::endl;
		form.execute(*this);
	}
	else {
		throw (Bureaucrat::GradeTooLowExecute());
	}
	
	
}

int				Bureaucrat::getGrade() const {
	return _grade;
}

std::string		Bureaucrat::getName() const {
	return _name;
}

void		Bureaucrat::signForm(bool sign, std::string contract_name) const {
	if (sign == true) {
		std::cout << "Contract : " << contract_name 
			<< ". A ete signe par : " << this->_name << std::endl;
	}
	else if (sign == false) {
		std::cout << "Contract : " << contract_name 
			<< ". Ne peut pas etre signe par : " << this->_name 
							<< ", Grade invalide." << std::endl;
	}
}

void		Bureaucrat::incGrade() {
	_grade -= 1;
	if (_grade < 1) {
		_grade = 1;
		throw (Bureaucrat::GradeTooHighException());
	}

}

void		Bureaucrat::decGrade() {
	_grade += 1;
	if (_grade > 150) {
		_grade = 150;
		throw (Bureaucrat::GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	_grade = grade;
	if (_grade > 150) {
		throw (Bureaucrat::GradeTooLowException());
	}
	if (_grade < 1) {
		throw (Bureaucrat::GradeTooHighException());
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

const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high ! -> It must be between 1 & 150");
}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low ! -> It must be between 1 & 150");
}

const char*			Bureaucrat::GradeTooLowExecute::what() const throw()
{
	return ("Grade too low to execute the contract !");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const & x) {
	out << x.getName() << " bureaucrate grade : " << 
			x.getGrade() << std::endl;
	return out;
}