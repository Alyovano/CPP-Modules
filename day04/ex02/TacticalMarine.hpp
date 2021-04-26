#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class TacticalMarine
{

private:

public:

	TacticalMarine(const TacticalMarine & x);
	TacticalMarine&	operator=(const TacticalMarine & x);
	TacticalMarine();
	~TacticalMarine();
};

#endif