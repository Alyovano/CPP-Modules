#include "Character.hpp"

std::string Character::getName() const {
	return _name;
}

int	 Character::getAP() const {
	return _ap;
}

std::string	 Character::getweaponname() const {
	return _weapon->getName();
}

int			Character::is_armed() const {
	return _armed;
}

Character::Character() {
}

Character::Character(std::string const & name) : _weapon(0) {
	_name = name;
	_ap = 40;
	_armed = 0;
}

Character::~Character() {
}

Character::Character(const Character & x) {
	*this = x;
}

Character &		Character::operator=(const Character & x) {
	if (this != &x) {
		this->_name = x.getName();
	}
    return *this;
}

void Character::equip(AWeapon * x) {
	_armed = 1;
	_weapon = x;
}

void Character::attack(Enemy * x) {
	if (_weapon == 0) {
		std::cout << "No weapon" << std::endl;
		return ;
	}
	if (_ap < _weapon->getAPCost()) {
		std::cout << "No ap" << std::endl;
		return ;
	}
	std::cout << this->getName() << " has attack " << x->getType() << " with " << _weapon->getName() << std::endl;
	_weapon->attack();
	x->takeDamage(_weapon->getDamage());
	_ap -= _weapon->getAPCost();
}

void Character::recoverAP() {
	if (_ap >= 40)
		return ;
	if (_ap >= 30) {
		_ap = 40;
		return ;
	}
	_ap += 10;
}

std::ostream & operator<<(std::ostream & out, Character const & x)
{
	out << x.getName() << " has " << x.getAP() << " AP ";
	if (x.is_armed() != 1)
		out << "and is unarmed" << std::endl;
	else
		out << "and carries a " << x.getweaponname() << std::endl;
	return (out);
}
