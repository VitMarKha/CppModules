#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class FragTrap {
public:
	FragTrap(const string& name);

	FragTrap(const FragTrap& fragTrap);

	~FragTrap();

	FragTrap& operator=(const FragTrap& fragTrap);

	void rangedAttack(const string& target);

	void meleeAttack(const string& target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

private:
	int		_hit_point;
	int		_max_hit_points;
	int		_energy_points;
	int		_max_energy_points;
	int		_level;
	string	_name;
	int		_melee_attack_damage;
	int 	_ranged_attack_damage;
	int		_armor_damage_reduction;
};


#endif
