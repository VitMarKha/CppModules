#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	void	attack() const;

	void	setWeapon(Weapon new_weapon);

	HumanB(const string& new_name);

	~HumanB();
private:
	string	_name;
	Weapon*	_weapon;
};

#endif
