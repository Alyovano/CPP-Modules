#include "Squad.hpp"

Squad::Squad() {
}

Squad::~Squad() {
}

Squad::Squad(const Squad & x) {
	*this = x;
}

Squad&		Squad::operator=(const Squad & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
