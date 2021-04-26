#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

private:

public:

	SuperMutant(const SuperMutant & x);
	SuperMutant&	operator=(const SuperMutant & x);
	SuperMutant();
	virtual ~SuperMutant();
	virtual void	takeDamage(int dmg);
};

#endif