#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

private:

public:

	virtual void attack() const;
	PowerFist(const PowerFist & x);
	PowerFist&	operator=(const PowerFist & x);
	PowerFist();
	virtual ~PowerFist();
};

#endif