#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const string& name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	cout << "Super Trap " << this->_name << " was created!" << endl;
	this->_hit_point = FragTrap::_hit_point;
	this->_max_hit_points = FragTrap::_max_hit_points;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	this->_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap) : ClapTrap(superTrap._name), FragTrap(superTrap._name), NinjaTrap(superTrap._name) {}

SuperTrap::~SuperTrap() {
	cout << "Super Trap " << this->_name << " was disassembled!" << endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap &superTrap) {
	this->_hit_point = superTrap._hit_point;
	this->_max_hit_points = superTrap._max_hit_points;
	this->_energy_points = superTrap._energy_points;
	this->_max_energy_points = superTrap._max_energy_points;
	this->_level = superTrap._level;
	this->_name = superTrap._name;
	this->_melee_attack_damage = superTrap._melee_attack_damage;
	this->_ranged_attack_damage = superTrap._ranged_attack_damage;
	this->_armor_damage_reduction = superTrap._armor_damage_reduction;
	return *this;
}
