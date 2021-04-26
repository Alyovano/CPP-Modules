#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & x) {
	*this = x;
}

SuperMutant&		SuperMutant::operator=(const SuperMutant & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}

void		SuperMutant::takeDamage(int dmg) {
	dmg -= 3;
	if (dmg <= 0)
		return ;
	else {
		_hp -= dmg;
		if (_hp <= 0) {
			std::cout << this->getType() << " : est mort" << std::endl;
		}
	}
}
