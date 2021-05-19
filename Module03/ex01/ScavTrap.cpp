#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string& name) : _hit_point(100), _max_hit_points(100), _energy_points(50), \
	_max_energy_points(50), _level(1), _name(name), _melee_attack_damage(30), _ranged_attack_damage(20), \
	_armor_damage_reduction(5) {
	cout << "Scav trap " << this->_name << " was created!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) { *this = scavTrap; }

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

void ScavTrap::rangedAttack(const string &target) {
	cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " \
		<< this->_ranged_attack_damage << " points of damage!" << endl;
}

void ScavTrap::meleeAttack(const string &target) {
	cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " \
		<< this->_melee_attack_damage << " points of damage!" << endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (this->_armor_damage_reduction >= amount) {
		cout << "The armor completely protected from damage" << endl;
	} else {
		amount -= this->_armor_damage_reduction;
		if (amount >= this->_hit_point)
			this->~ScavTrap();
		else {
			this->_hit_point -= amount;
			cout << "Received " << amount << " damage!" << endl;
			cout << "Number of lives: " << this->_hit_point << "/" << this->_max_hit_points << endl;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hit_point == this->_max_hit_points)
		cout << "Scav Trap " << this->_name << "'s lives are at their maximum!" << endl;
	else {
		this->_hit_point += amount;
		if (this->_hit_point > this->_max_hit_points)
			this->_hit_point = this->_max_hit_points;
		cout << "Scav Trap " << this->_name << " lives were restored on " << amount << " " << this->_hit_point << "/" \
			<< this->_max_hit_points << endl;
	}

	if (this->_energy_points == this->_max_energy_points)
		cout << "Scav Trap " << this->_name << "'s lives are at their maximum!" << endl;
	else {
		this->_energy_points += amount;
		if (this->_energy_points > this->_max_energy_points)
			this->_energy_points = this->_max_energy_points;
		cout << "Scav Trap " << this->_name << " energy were restored on " << amount << " " << this->_energy_points << "/" \
			<< this->_max_energy_points << endl;
	}
}

void ScavTrap::challengeNewcomer() {
	string actions[5] = {" is resting", " leaned against the wall" , " squatted down", " lit a cigarette", " did a backflip"};
	cout << "The trap " << this->_name << actions[rand() % 5] << endl;
}
