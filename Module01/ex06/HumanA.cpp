#include "HumanA.hpp"

void HumanA::attack() const {
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}

void HumanA::setWeapon(const Weapon& new_weapon) {
	this->_weapon = new_weapon;
}

HumanA::HumanA() {
	this->_name = "Maks";
	this->_weapon = Weapon();
}

HumanA::HumanA(const string &new_name) {
	this->_name = new_name;
	this->_weapon = Weapon();
}

HumanA::HumanA(const string& new_name, const Weapon& new_type_weapon) {
	this->_name = new_name;
	this->_weapon = new_type_weapon;
}

HumanA::~HumanA() {
	cout << this->_name << " is dead" << endl;
}
