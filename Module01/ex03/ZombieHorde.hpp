#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
public:
	void announce() const;

	ZombieHorde(int n);
	~ZombieHorde();
private:
	int		_count_zombie;
	Zombie*	_zombies;
};

#endif
