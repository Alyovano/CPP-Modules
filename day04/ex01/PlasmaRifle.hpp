#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

private:

public:
	virtual void attack() const;
	PlasmaRifle(const PlasmaRifle & x);
	PlasmaRifle&	operator=(const PlasmaRifle & x);
	PlasmaRifle();
	virtual ~PlasmaRifle();
};

#endif