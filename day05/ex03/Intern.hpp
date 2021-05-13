#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberryCreationForm;

class Form;

class Intern
{

private:

public:
	Form		*makeForm(const std::string formName, const std::string target) const;

	Intern(const Intern & x);
	Intern&	operator=(const Intern & x);
	Intern();
	~Intern();


	struct FormDoesntExist : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};


#endif