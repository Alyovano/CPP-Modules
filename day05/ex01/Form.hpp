/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:52 by aly               #+#    #+#             */
/*   Updated: 2021/05/12 14:53:56 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Bureaucrat.hpp"

class Form
{

private:
	bool				_signed;
	const int			_grade_to_exec;
	const int			_grade_to_sign;
	std::string const 	_name;

public:
	int				getGradetoexec() const;	
	int				getGradetosign() const;
	std::string		getName() const;
	bool			getSign() const; 

	void		beSigned(Bureaucrat const & x);
	struct GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	
	Form(const Form & x);
	Form&	operator=(const Form & x);
	Form(std::string const name, int grade_sign, int grade_exec);
	~Form();

};

std::ostream& operator<<(std::ostream& out, Form const & x);

#endif