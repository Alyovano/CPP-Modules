#include "AnnuaireClass.hpp"

Annuaire::Annuaire(void) {

	std::cout << "Construit" << std::endl;
	this->test = 5;
	std::cout << this->test << std::endl;
	return ;
}

Annuaire::~Annuaire(void) {

	std::cout << "Detruit" << std::endl;
	return ;
}