#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::Cure(const Cure &cure) : AMateria("cure") { *this = cure; }

Cure::~Cure() { }

Cure &Cure::operator=(const Cure &cure) {
	this->_xp = cure.getXP();
	return *this;
}

AMateria *Cure::clone() const {
	Cure* clone = new Cure(*this);
    return clone;
}

void Cure::use(ICharacter& target) {
    cout << "* heals " << target.getName() << "’s wounds *" << endl;
    AMateria::use(target);
}
