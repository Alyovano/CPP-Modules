/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:52 by aly               #+#    #+#             */
/*   Updated: 2021/05/12 15:05:04 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <unistd.h>


class Bureaucrat
{

private:
	int					_grade;
	std::string const 	_name;

public:
	int				getGrade() const;
	std::string		getName() const;
	Bureaucrat(const Bureaucrat & x);
	Bureaucrat&	operator=(const Bureaucrat & x);
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	void		signForm(bool sign, std::string contact_name) const;
	void		incGrade();
	void		decGrade();
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
	
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const & x);

#endif