#include "FragTrap.hpp"

FragTrap::FragTrap(const string& name) : _hit_point(100), _max_hit_points(100), _energy_points(50), \
	_max_energy_points(50), _level(1), _name(name), _melee_attack_damage(30), _ranged_attack_damage(20), \
	_armor_damage_reduction(5) {
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
	cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " \
		<< this->_ranged_attack_damage << " points of damage!" << endl;
}

void FragTrap::meleeAttack(const string &target) {
	cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " \
		<< this->_melee_attack_damage << " points of damage!" << endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (this->_armor_damage_reduction >= amount) {
		cout << "The armor completely protected from damage" << endl;
	} else {
		amount -= this->_armor_damage_reduction;
		if (amount >= this->_hit_point)
			this->~FragTrap();
		else {
			this->_hit_point -= amount;
			cout << "Received " << amount << " damage!" << endl;
			cout << "Number of lives: " << this->_hit_point << "/" << this->_max_hit_points << endl;
		}
	}
}

void FragTrap::beRepaired(unsigned int amount) {
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

void FragTrap::vaulthunter_dot_exe(const string &target) {
	string names[5] = {"covertly", "surreptitiously" , "in the jump", "with your foot", "in the capture"};
	if (this->_energy_points < 25)
		cout << "Not enough power" << endl;
	else {
		this->_energy_points -= 25;
		if (rand() % 2) {
			this->rangedAttack(target);
			cout << "He attacked in " << names[rand() % 5] << endl;
		}
		else {
			this->meleeAttack(target);
			cout << "He attacked in " << names[rand() % 5] << endl;
		}
	}
}
