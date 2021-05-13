#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Form.hpp"
#include "Bureaucrat.hpp"
class ShruberryCreationForm : public Form
{

private:

public:
	virtual void	execute(Bureaucrat const & executor) const;
	ShruberryCreationForm(const ShruberryCreationForm & x);
	ShruberryCreationForm&	operator=(const ShruberryCreationForm & x);
	ShruberryCreationForm(std::string target);
	~ShruberryCreationForm();
};

#endif