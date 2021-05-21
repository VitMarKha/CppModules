#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { }

PlasmaRifle::PlasmaRifle(PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle) { }

PlasmaRifle::~PlasmaRifle() { }

void PlasmaRifle::attack() const {
	cout << "* piouuu piouuu piouuu *" << endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle) {
	this->_name = plasmaRifle._name;
	this->_apcost = plasmaRifle._apcost;
	this->_damage = plasmaRifle._damage;
	return *this;
}
