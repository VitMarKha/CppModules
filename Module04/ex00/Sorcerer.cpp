#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const string& name, const string& title) : _name(name), _title(title) {
	cout << this->_name << ", " << this->_title << " is born!" << endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer) { *this = sorcerer; }

Sorcerer::~Sorcerer() {
	cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& sorcerer) {
	this->_name = sorcerer._name;
	this->_title = sorcerer._title;
	return *this;
}

string Sorcerer::getName() const { return this->_name; }

string Sorcerer::getTitle() const { return this->_title; }

void Sorcerer::polymorph(const Victim &victim) const {
	victim.getPolymorphed();
}

ostream& operator<<(ostream& out, const Sorcerer& sorcerer) {
	cout << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << endl;
	return out;
}
