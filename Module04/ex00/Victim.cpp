#include "Victim.hpp"

Victim::Victim(const string &name) : _name(name) {
	cout << "Some random victim called " << this->_name << " just appeared!" << endl;
}

Victim::Victim(const Victim &victim) { *this = victim; }

Victim::~Victim() {
	cout << "Victim " << this->_name << " just died for no apparent reason!" << endl;
}

Victim &Victim::operator=(const Victim &victim) {
	this->_name = victim._name;
	return *this;
}

string Victim::getName() const {
	return this->_name;
}

void Victim::getPolymorphed() const {
	cout << this->_name << " has been turned into a cute little sheep!" << endl;
}

ostream& operator<<(ostream& out, const Victim& victim) {
	cout << "I'm " << victim.getName() << " and I like otters!" << endl;
	return out;
}
