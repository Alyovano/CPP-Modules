#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
}

TacticalMarine::~TacticalMarine() {
}

TacticalMarine::TacticalMarine(const TacticalMarine & x) {
	*this = x;
}

TacticalMarine&		TacticalMarine::operator=(const TacticalMarine & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
