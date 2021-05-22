#include "AMateria.hpp"

AMateria::AMateria(const string& type) : _type(type), _xp(0) { }

AMateria::~AMateria() { }

unsigned int AMateria::getXP() const { return this->_xp; }

const string& AMateria::getType() const { return this->_type; }

void AMateria::use(ICharacter &target) {
	(void)target;
	this->_xp += 10;
}
