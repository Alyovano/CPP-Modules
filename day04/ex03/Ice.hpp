#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AMateria.hpp"

class Ice : public AMateria
{

private:

public:

	Ice(const Ice & x);
	Ice&	operator=(const Ice & x);
	Ice();
	~Ice();
};

#endif