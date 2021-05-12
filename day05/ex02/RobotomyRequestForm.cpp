#include "RobotomyRequestForm.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void 	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	srand (time(NULL));
	int v1 = rand() % 100;

	if (v1 > 70) {
			std::cout << getTarget() 
					<< " a bien été robotomizée" << std::endl;
	}
	else {
		std::cout << getTarget() 
				<< " n'a pas ete robotomizée" << std::endl;
	}
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
					Form("RobotomyRequestForm", 72, 45, target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & x) : Form(x) {
	*this = x;
}

RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
