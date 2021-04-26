#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class AssaultTerminator
{

private:

public:

	AssaultTerminator(const AssaultTerminator & x);
	AssaultTerminator&	operator=(const AssaultTerminator & x);
	AssaultTerminator();
	~AssaultTerminator();
};

#endif