#include "AMateria.hpp"

unsigned int		AMateria::getXP() const {
	return _xp;
}

std::string const & AMateria::getType() const {
	return _type;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
}

AMateria::~AMateria() {
}

// AMateria::AMateria(const AMateria & x) {
// 	*this = x;
// }

AMateria&		AMateria::operator=(const AMateria & x) {
	if (this != &x) {
		this->_xp = x.getXP();
		this->_type = x.getType();
	}
    return *this;
}
