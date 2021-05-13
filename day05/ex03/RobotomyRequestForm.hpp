#ifndef ROBOTOMYMYREQUESTFORM_HPP
#define ROBOTOMYMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Form.hpp"
#include "Bureaucrat.hpp"
class RobotomyRequestForm : public Form
{

private:

public:

	virtual void 	execute(Bureaucrat const & executor) const ;
	RobotomyRequestForm(const RobotomyRequestForm & x);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm & x);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
};

#endif