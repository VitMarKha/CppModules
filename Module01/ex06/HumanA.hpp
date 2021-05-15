#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	void	attack() const;

	void	setWeapon(const Weapon& new_weapon);

	HumanA();

	HumanA(const string& new_name);

	HumanA(const string& new_name, const Weapon& new_type_weapon);

	~HumanA();
private:
	string	_name;
	Weapon	_weapon;
};


#endif
