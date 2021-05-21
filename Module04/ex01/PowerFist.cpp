#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { }

PowerFist::PowerFist(PowerFist &powerFist) : AWeapon(powerFist) { }

PowerFist::~PowerFist() { }

PowerFist &PowerFist::operator=(const PowerFist &powerFist) {
	this->_name = powerFist._name;
	this->_apcost = powerFist._apcost;
	this->_damage = powerFist._damage;
	return *this;
}

void PowerFist::attack() const {
	cout << "* pschhh... SBAM! *" << endl;
}

