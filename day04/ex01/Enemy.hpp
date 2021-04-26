#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Enemy
{

protected:
	std::string _type;
	int _hp;
public:

	Enemy(const Enemy & x);
	std::string		getType() const;
	Enemy&	operator=(const Enemy & x);
	Enemy(int hp, std::string const & type);
	Enemy();
	virtual ~Enemy();
	int		getHP() const;
	virtual void takeDamage(int dmg);
};

#endif