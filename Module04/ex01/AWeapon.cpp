#include "AWeapon.hpp"

AWeapon::AWeapon(const string &name, int apcost, int damage) : _name(name), _damage(damage), _apcost(apcost) { }

AWeapon::AWeapon(AWeapon &aWeapon) { *this = aWeapon; }

AWeapon::~AWeapon() { }

AWeapon &AWeapon::operator=(const AWeapon &aWeapon) {
	this->_name = aWeapon._name;
	this->_apcost = aWeapon._apcost;
	this->_damage = aWeapon._damage;
	return *this;
}

std::string AWeapon::getName() const { return this->_name; }

int AWeapon::getAPCost() const { return this->_apcost; }

int AWeapon::getDamage() const { return this->_damage; }

