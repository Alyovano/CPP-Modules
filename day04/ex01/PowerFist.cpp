#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50){
}

PowerFist::~PowerFist() {
	std::cout << "PowerFirst : Destructor called" << std::endl;
}

PowerFist::PowerFist(const PowerFist & x) {
	*this = x;
}

PowerFist&		PowerFist::operator=(const PowerFist & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}