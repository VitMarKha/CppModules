#include "Weapon.hpp"

string Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const string& new_type) {
	this->_type = new_type;
}

Weapon::Weapon(const string& new_type) {
	this->_type = new_type;
}

Weapon::Weapon() {
	this->_type = "Blaster";
}

Weapon::~Weapon() {
	cout << this->_type << " weapons dropped" << endl;
}
