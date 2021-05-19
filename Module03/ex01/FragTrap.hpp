#ifndef EX01_FRAGTRAP_HPP
#define EX01_FRAGTRAP_HPP

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

	void vaulthunter_dot_exe(const string& target);

private:
	unsigned	int	_hit_point;
	unsigned	int	_max_hit_points;
	unsigned	int	_energy_points;
	unsigned	int	_max_energy_points;
	unsigned	int	_level;
	string			_name;
	unsigned	int	_melee_attack_damage;
	unsigned	int	_ranged_attack_damage;
	unsigned	int	_armor_damage_reduction;
};


#endif
