#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	void	attack() const;

	void	setWeapon(const Weapon& new_weapon);

	HumanB();

	HumanB(const string& new_name);

	HumanB(const string& new_name, const Weapon& new_type_weapon);

	~HumanB();
private:
	string	_name;
	Weapon	_weapon;
};

#endif
