#include "Cure.hpp"

Cure::Cure() : AMateria("ice") {
}

Cure::~Cure() {
}

Cure::Cure(const Cure & x) {
	*this = x;
}

Cure&		Cure::operator=(const Cure & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
