#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	cout << "Gaaah. Me want smash heads!" << endl;
}

SuperMutant::SuperMutant(int hp, const string &type) : Enemy(hp, type) {
	cout << "Gaaah. Me want smash heads!" << endl;
}

SuperMutant::SuperMutant(SuperMutant &superMutant) : Enemy(superMutant) { }

SuperMutant::~SuperMutant() {
	cout << "Aaargh..." << endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant) {
	this->_hp = superMutant._hp;
	this->_type = superMutant._type;
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
	if (this->_hp <= 0)
		this->~SuperMutant();
}


