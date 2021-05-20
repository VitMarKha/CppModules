#include "FragTrap.hpp"

FragTrap::FragTrap(const string& name) : ClapTrap(name) {
	cout << "FR4G-TP " << this->_name << " was created!" << endl;
	this->_hit_point = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap._name) {}

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
