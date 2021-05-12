#include "PresidentialPardonForm.hpp"

void 	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout << getTarget() << " a été pardonnée par Zafod Beeblebrox." << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
					Form("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & x) : Form(x) {
	*this = x;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
