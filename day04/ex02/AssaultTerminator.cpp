#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
}

AssaultTerminator::~AssaultTerminator() {
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & x) {
	*this = x;
}

AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
