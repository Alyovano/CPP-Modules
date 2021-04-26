#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Squad
{

private:

public:

	Squad(const Squad & x);
	Squad&	operator=(const Squad & x);
	Squad();
	~Squad();
};

#endif