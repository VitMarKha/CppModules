#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const string& name) : ClapTrap(name) {
	cout << "FR4G-TP " << this->_name << " was created!" << endl;
	this->_hit_point = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap._name) {}

NinjaTrap::~NinjaTrap() {
	cout << "FR4G-TP " << this->_name << " was disassembled!" << endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &fragTrap) {
	this->_hit_point = fragTrap._hit_point;
	this->_max_hit_points = fragTrap._max_hit_points;
	this->_energy_points = fragTrap._energy_points;
	this->_max_energy_points = fragTrap._max_energy_points;
	this->_level = fragTrap._level;
	this->_name = fragTrap._name;
	this->_melee_attack_damage = fragTrap._melee_attack_damage;
	this->_ranged_attack_damage = fragTrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragTrap._armor_damage_reduction;
	return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap& fragTrap) const {
	cout << "The Ninja " << this->_name << " has triggered a Frag Trap attack!" << endl;
	fragTrap.vaulthunter_dot_exe("Ninja");
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) const {
	cout << "The Ninja " << this->_name << " has triggered a Scav Trap attack!" << endl;
	scavTrap.challengeNewcomer();
}
