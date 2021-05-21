#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	cout << "click click click" << endl;
}

RadScorpion::RadScorpion(int hp, const string &type) : Enemy(hp, type) {
	cout << "click click click" << endl;
}

RadScorpion::RadScorpion(RadScorpion &radScorpion) : Enemy(radScorpion) { }

RadScorpion::~RadScorpion() {
	cout << "* SPROTCH *" << endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion) {
	this->_hp = radScorpion._hp;
	this->_type = radScorpion._type;
	return *this;
}

void RadScorpion::takeDamage(int damage) {
	Enemy::takeDamage(damage);
	if (this->_hp <= 0)
		this->~RadScorpion();
}
