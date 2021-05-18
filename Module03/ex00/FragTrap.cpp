#include "FragTrap.hpp"

FragTrap::FragTrap(const string& name) : _hit_point(100), _max_hit_points(100), _energy_points(100), _level(1), \
	_name(name), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {
	cout << "FR4G-TP " << this->_name << " was created!" << endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) { *this = fragTrap; }

FragTrap::~FragTrap() {
	cout << "FR4G-TP " << this->_name << " was disassembled!" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap) {
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

void FragTrap::rangedAttack(const string &target) {
	cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->takeDamage() << " points of damage!" << endl;
	this->takeDamage(target);
}

void FragTrap::meleeAttack(const string &target) {

}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount >= this->_hit_point)
		this->~FragTrap();
	else {
		
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->_hit_point == 100)
			cout << this->_name << "'s lives are at their maximum!" << endl;
	else {
		this->_hit_point = 100;
		cout << "Fixed " << this->_name << endl;
	}
}
