/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:54 by aly               #+#    #+#             */
/*   Updated: 2021/05/12 18:25:56 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

bool			Form::getSign() const {
	return _signed;
}

std::string		Form::getTarget() const {
	return _target;
}

int				Form::getGradetosign() const {
	return _grade_to_sign;
}

int				Form::getGradetoexec() const {
	return _grade_to_exec;
}

std::string		Form::getName() const {
	return _name;
}

Form::Form(std::string const name, int grade_sign, int grade_exec, std::string target) :  
															_grade_to_exec(grade_exec),
															_grade_to_sign(grade_sign),
															_name(name),
															_target(target)
{
	_signed = false;
	if (_grade_to_sign > 150 || _grade_to_exec > 150) {
		throw (Form::GradeTooLowException());
	}
	if (_grade_to_sign < 1 || _grade_to_exec < 1) {
		throw (Form::GradeTooHighException());
	}
}

void		Form::beSigned(Bureaucrat const & x) {
	if (x.getGrade() <= _grade_to_sign)
	{
		_signed = true;
		x.signForm(true, _name);
	}
	else {
		x.signForm(false, _name);
		throw (Form::GradeTooLowSign());
	}
}

Form::~Form() {
}

Form::Form(const Form & x) : _grade_to_exec(x.getGradetoexec()),
							 _grade_to_sign(x.getGradetosign()),
							 _name(x.getName()) 
{
	*this = x;
}

Form&		Form::operator=(const Form & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

const char*			Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high ! -> It must be between 1 & 150");
}

const char*			Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low ! -> It must be between 1 & 150");
}

const char*			Form::GradeTooLowSign::what() const throw()
{
	return ("Personnel : Grade too low to sign the contract");
}

const char*			Form::GradeTooLowExec::what() const throw()
{
	return ("Personnel : Grade too low to Exec the contract");
}

std::ostream& operator<<(std::ostream& out, Form const & x) {
	out << x.getName() << " : grade to sign : " << 
			x.getGradetosign() << " and to exec : " 
					<< x.getGradetoexec() << std::endl;
	return out;
}