#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ScavTrap {
public:
	ScavTrap(const string& name);

	ScavTrap(const ScavTrap& scavTrap);

	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& scavTrap);

	void	rangedAttack(const string& target);

	void	meleeAttack(const string& target);

	void	takeDamage(unsigned int amount);

	void	beRepaired(unsigned int amount);

	void	challengeNewcomer();

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
