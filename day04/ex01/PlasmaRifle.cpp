#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {
	std::cout << "PlasmaRifle : Destructor called" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & x) {
	*this = x;
}

PlasmaRifle&		PlasmaRifle::operator=(const PlasmaRifle & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}