#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle& plasmaRifle);
	~PlasmaRifle();
	PlasmaRifle&	operator=(const PlasmaRifle& plasmaRifle);

	void attack() const;
};

#endif
