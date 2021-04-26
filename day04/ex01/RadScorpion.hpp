#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

private:

public:

	RadScorpion(const RadScorpion & x);
	RadScorpion&	operator=(const RadScorpion & x);
	RadScorpion();
	virtual ~RadScorpion();
};

#endif