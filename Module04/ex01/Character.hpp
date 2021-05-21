#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Character {
public:
	Character(string const & name);
	Character(Character& character);
	~Character();
	Character&	operator=(const Character& character);

	void			recoverAP();

	void			equip(AWeapon* aWeapon);

	void			attack(Enemy* enemy);

	virtual	string	getName() const;

	int				getAP() const;

	string			getAWeapon() const;

private:
	string		_name;
	int 		_ap;
	AWeapon*	_aWeapon;
};

ostream& operator<<(ostream& out, const Character& character);

#endif
