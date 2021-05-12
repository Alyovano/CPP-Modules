#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{

private:

public:

	virtual void 	execute(Bureaucrat const & executor) const ;
	PresidentialPardonForm(const PresidentialPardonForm & x);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm & x);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
};

#endif