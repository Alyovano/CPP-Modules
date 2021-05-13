#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern & x) {
	*this = x;
}

Intern&		Intern::operator=(const Intern & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

Form *Intern::makeForm(const std::string formName, const std::string target) const {
	std::string targets[3] = {"shrubbery creation", 
							  "robotomy request", 
							  "presidential pardon"};

	Form *forms[3];
	forms[0] = new ShruberryCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);

	Form *new_form = 0;
	for (int i = 0; i < 3; i++)
	{
		if (formName == targets[i])
		{
			std::cout << "Intern creates " << formName << " form." << '\n';
			new_form = forms[i];
			continue;
		}
		delete forms[i];
	}
	if (new_form)
		return (new_form);
	else
		throw (Intern::FormDoesntExist());
}

const char*			Intern::FormDoesntExist::what() const throw()
{
	return ("This Form doesn't exist");
}
