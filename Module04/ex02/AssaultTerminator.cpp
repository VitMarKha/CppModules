#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	cout << "* teleports from space *" << endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assaultTerminator) {
	(void)assaultTerminator;
	cout << "* teleports from space *" << endl;
}

AssaultTerminator::~AssaultTerminator() {
	cout << "I’ll be back..." << endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assaultTerminator) {
	(void)assaultTerminator;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const {
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return clone;
}

void AssaultTerminator::battleCry() const {
	cout << "This code is unclean. PURIFY IT!" << endl;
}

void AssaultTerminator::rangedAttack() const {
	cout << "* does nothing *" << endl;
}

void AssaultTerminator::meleeAttack() const {
	cout << "* attacks with chainfists *" << endl;
}