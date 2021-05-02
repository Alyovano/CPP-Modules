#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice(const Ice & x) {
	*this = x;
}

Ice&		Ice::operator=(const Ice & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
