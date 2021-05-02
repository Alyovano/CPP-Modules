#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AMateria.hpp"

class Cure : public AMateria
{

private:

public:

	Cure(const Cure & x);
	Cure&	operator=(const Cure & x);
	Cure();
	~Cure();
};

#endif