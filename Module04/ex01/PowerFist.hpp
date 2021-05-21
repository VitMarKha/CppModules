#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(PowerFist& powerFist);
	~PowerFist();
	PowerFist&	operator=(const PowerFist& powerFist);

	void attack() const;
};

#endif