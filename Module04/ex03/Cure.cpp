#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::~Cure() { }

AMateria *Cure::clone() const {
    AMateria* clone = new Cure();
    return clone;
}

void Cure::use(ICharacter &target) {
    cout << "* heals " << target.getName() << "’s wounds *" << endl;
}
