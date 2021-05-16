#include "HumanA.hpp"

void HumanA::attack() const {
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}

void HumanA::setWeapon(Weapon& new_weapon) {
	this->_weapon = new_weapon;
}

HumanA::HumanA(const string& new_name, Weapon& new_type_weapon) : _weapon(new_type_weapon) {
	this->_name = new_name;
}

HumanA::~HumanA() {
	cout << this->_name << " is dead" << endl;
}
