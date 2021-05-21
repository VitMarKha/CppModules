#include "AMateria.hpp"

AMateria::AMateria(const string& type) : _type(type) { }

AMateria::~AMateria() { }

unsigned int AMateria::getXP() const { return AMateria::_xp; }

const string& AMateria::getType() const { return this->_type; }

unsigned int AMateria::_xp = 0;

void AMateria::use(ICharacter &target) {
    //todo
}
