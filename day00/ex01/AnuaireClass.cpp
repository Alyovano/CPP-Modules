#include "AnuaireClass.hpp"

Anuaire::Anuaire(void) {

	std::cout << "Construit" << std::endl;
	this->test = 5;
	std::cout << this->test << std::endl;
	return ;
}

Anuaire::~Anuaire(void) {

	std::cout << "Detruit" << std::endl;
	return ;
}