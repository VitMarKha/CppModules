#ifndef EX03_CLAPTRAP_HPP
#define EX03_CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap {
public:
	ClapTrap(const string& name);

	ClapTrap(const ClapTrap& clapTrap);

	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& clapTrap);

	void	rangedAttack(const string& target);

	void	meleeAttack(const string& target);

	void	takeDamage(unsigned int amount);

	void	beRepaired(unsigned int amount);

protected:
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
