#ifndef EX01_ENEMY_H
#define EX01_ENEMY_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Enemy {
public:
	Enemy(int hp, const string& type);
	Enemy(Enemy& enemy);
	virtual ~Enemy();
	Enemy&	operator=(const Enemy& enemy);

	virtual	string	getType() const;

	int				getHP() const;

	virtual	void	takeDamage(int damage);

protected:
	string	_type;
	int		_hp;
};

#endif
