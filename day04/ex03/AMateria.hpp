#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class AMateria
{

protected:
	unsigned int _xp;
	std::string _type;

public:

	//AMateria(const AMateria & x);
	AMateria&	operator=(const AMateria & x);
	AMateria(std::string const & type);
	~AMateria();

	AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter & target);
};

#endif