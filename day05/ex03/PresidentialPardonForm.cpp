#include "PresidentialPardonForm.hpp"

void 	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	if (this->getSign() == true) {
		std::cout << getTarget() << " a été pardonnée par Zafod Beeblebrox." << std::endl;
	}
	else {
		std::cout << "Le contract n'est pas encore signe" << std::endl;
	}

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
