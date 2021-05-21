#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class AWeapon {
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon& aWeapon);
	virtual ~AWeapon();
	AWeapon&	operator=(const AWeapon& aWeapon);

	virtual string getName() const;

	int getAPCost() const;

	int getDamage() const;

	virtual void attack() const = 0;

protected:
	string	_name;
	int		_damage;
	int		_apcost;
};

#endif
