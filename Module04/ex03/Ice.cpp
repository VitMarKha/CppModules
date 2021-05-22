#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::Ice(const Ice& ice) : AMateria("ice") { this->_xp = ice.getXP(); }

Ice::~Ice() { }

Ice &Ice::operator=(const Ice& ice) {
	this->_xp = ice.getXP();
	return *this;
}

AMateria *Ice::clone() const {
    Ice* clone = new Ice(*this);
    return clone;
}

void Ice::use(ICharacter& target) {
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
    AMateria::use(target);
}
