#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion();
	RadScorpion(int hp, const string& type);
	RadScorpion(RadScorpion& radScorpion);
	virtual ~RadScorpion();
	RadScorpion&	operator=(const RadScorpion& radScorpion);

	virtual	void	takeDamage(int damage);
};

#endif
