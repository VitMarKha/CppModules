#include "Peon.hpp"

Peon::Peon(const string &name) : Victim(name) {
	cout << "Zog zog." << endl;
}

Peon::Peon(const Peon &peon) : Victim(peon._name) {}

Peon::~Peon() {
	cout << "Bleuark..." << endl;
}

Peon &Peon::operator=(const Peon &peon) {
	this->_name = peon._name;
	return *this;
}

void Peon::getPolymorphed() const {
	cout << this->getName() << " has been turned into a pink pony!" << endl;
}
