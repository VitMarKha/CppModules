#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const string& name);

	SuperTrap(const SuperTrap& superTrap);

	~SuperTrap();

	SuperTrap& operator=(const SuperTrap& superTrap);

private:
	unsigned    int    _hit_point;
	unsigned    int    _max_hit_points;
	unsigned    int    _energy_points;
	unsigned    int    _max_energy_points;
	unsigned    int    _level;
	string				_name;
	unsigned    int    _melee_attack_damage;
	unsigned    int    _ranged_attack_damage;
	unsigned    int    _armor_damage_reduction;
};

#endif
