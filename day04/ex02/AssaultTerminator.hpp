#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Squad.hpp"

class AssaultTerminator : public ISpaceMarine
{

private:
	std::string _type;

public:

	std::string	getType() const;
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	AssaultTerminator(const AssaultTerminator & x);
	AssaultTerminator&	operator=(const AssaultTerminator & x);
	AssaultTerminator();
	virtual ~AssaultTerminator();
};

#endif