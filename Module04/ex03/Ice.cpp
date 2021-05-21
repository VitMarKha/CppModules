#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::~Ice() { }

AMateria *Ice::clone() const {
    AMateria* clone = new Ice();
    return clone;
}

void Ice::use(ICharacter &target) {
    cout << "* shoots an ice bolt at " << target.geName() << " *" << endl;
}
