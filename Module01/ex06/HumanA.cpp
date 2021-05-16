#include "HumanA.hpp"

void HumanA::attack() const {
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}

HumanA::HumanA(const string& new_name, Weapon& new_type_weapon) : _name(new_name), _weapon(new_type_weapon) {}

HumanA::~HumanA() {
	cout << this->_name << " is dead" << endl;
}
