/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:52 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 17:24:40 by aly              ###   ########.fr       */
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
};

#endif