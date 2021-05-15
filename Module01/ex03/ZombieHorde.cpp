#include "ZombieHorde.hpp"

void ZombieHorde::announce() const {
	for (int i = 0; i < this->_count_zombie; ++i)
		this->_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int n) {
	if (n <= 0) {
		cout << "Horde not created" << endl;
		return;
	}
	this->_count_zombie = n;
	this->_zombies = new Zombie[this->_count_zombie];
	cout << "Horde created!" << endl;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombies;
	cout << "Horde is dead!" << endl;
}
