#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string& name) : _hit_point(100), _max_hit_points(100), _energy_points(50), \
	_max_energy_points(50), _level(1), _name(name), _melee_attack_damage(30), _ranged_attack_damage(20), \
	_armor_damage_reduction(5) {
	cout << "ClapTrap is done!" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) { *this = clapTrap; }

ClapTrap::~ClapTrap() {
	cout << "ClapTrap destroyed" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	this->_hit_point = clapTrap._hit_point;
	this->_max_hit_points = clapTrap._max_hit_points;
	this->_energy_points = clapTrap._energy_points;
	this->_max_energy_points = clapTrap._max_energy_points;
	this->_level = clapTrap._level;
	this->_name = clapTrap._name;
	this->_melee_attack_damage = clapTrap._melee_attack_damage;
	this->_ranged_attack_damage = clapTrap._ranged_attack_damage;
	this->_armor_damage_reduction = clapTrap._armor_damage_reduction;
	return *this;
}

void ClapTrap::rangedAttack(const string &target) {
	cout << this->_name << " attacks " << target << " at range, causing " \
		<< this->_ranged_attack_damage << " points of damage!" << endl;
}

void ClapTrap::meleeAttack(const string &target) {
	cout << this->_name << " attacks " << target << " at melee, causing " \
		<< this->_melee_attack_damage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_armor_damage_reduction >= amount) {
		cout << "The armor completely protected from damage" << endl;
	} else {
		amount -= this->_armor_damage_reduction;
		if (amount >= this->_hit_point)
			this->~ClapTrap();
		else {
			this->_hit_point -= amount;
			cout << "Received " << amount << " damage!" << endl;
			cout << "Number of lives: " << this->_hit_point << "/" << this->_max_hit_points << endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_point == this->_max_hit_points)
		cout << this->_name << "'s lives are at their maximum!" << endl;
	else {
		this->_hit_point += amount;
		if (this->_hit_point > this->_max_hit_points)
			this->_hit_point = this->_max_hit_points;
		cout << this->_name << " lives were restored on " << amount << " " << this->_hit_point << "/" \
			<< this->_max_hit_points << endl;
	}

	if (this->_energy_points == this->_max_energy_points)
		cout << this->_name << "'s lives are at their maximum!" << endl;
	else {
		this->_energy_points += amount;
		if (this->_energy_points > this->_max_energy_points)
			this->_energy_points = this->_max_energy_points;
		cout << this->_name << " energy were restored on " << amount << " " << this->_energy_points << "/" \
			<< this->_max_energy_points << endl;
	}
}
