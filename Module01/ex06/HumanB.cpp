#include "HumanB.hpp"

void HumanB::attack() const {
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}

void HumanB::setWeapon(const Weapon& new_weapon) {
	this->_weapon = new_weapon;
}

HumanB::HumanB() {
	this->_name = "Ted";
	this->_weapon = Weapon();
}

HumanB::HumanB(const string &new_name) {
	this->_name = new_name;
	this->_weapon = Weapon();
}

HumanB::HumanB(const string& new_name, const Weapon& new_type_weapon) {
	this->_name = new_name;
	this->_weapon = new_type_weapon;
}

HumanB::~HumanB() {
	cout << this->_name << " is dead" << endl;
}
