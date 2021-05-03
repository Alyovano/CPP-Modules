#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{

}

Cure& Cure::operator=(const Cure &cure)
{
	AMateria::operator=(cure);
	return (*this);
}

Cure::~Cure()
{

}

AMateria *Cure::clone() const
{
	Cure *cure = new Cure(*this);

	return (cure);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
