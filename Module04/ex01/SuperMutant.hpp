#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(int hp, const string& type);
	SuperMutant(SuperMutant& superMutant);
	virtual ~SuperMutant();
	SuperMutant&	operator=(const SuperMutant& superMutant);

	virtual	void	takeDamage(int damage);
};

#endif
