#include "HumanB.hpp"

void HumanB::attack() const {
	cout << this->_name << " attacks with his " << this->_weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon new_weapon) {
	this->_weapon = &new_weapon;
}

HumanB::HumanB(const string& new_name) : _name(new_name), _weapon(NULL) {}

HumanB::~HumanB() {
	cout << this->_name << " is dead" << endl;
}
