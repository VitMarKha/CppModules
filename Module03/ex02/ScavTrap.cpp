#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string& name) : ClapTrap(name) {
	cout << "Scav trap " << this->_name << " was created!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap._name) {}

ScavTrap::~ScavTrap() {
	cout << "Scav trap " << this->_name << " was disassembled!" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap) {
	this->_hit_point = scavTrap._hit_point;
	this->_max_hit_points = scavTrap._max_hit_points;
	this->_energy_points = scavTrap._energy_points;
	this->_max_energy_points = scavTrap._max_energy_points;
	this->_level = scavTrap._level;
	this->_name = scavTrap._name;
	this->_melee_attack_damage = scavTrap._melee_attack_damage;
	this->_ranged_attack_damage = scavTrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavTrap._armor_damage_reduction;
	return *this;
}

void ScavTrap::challengeNewcomer() {
	string actions[5] = {" is resting", " leaned against the wall" , " squatted down", " lit a cigarette", \
		" did a backflip"};
	cout << "The trap " << this->_name << actions[rand() % 5] << endl;
}
