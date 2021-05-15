#include "Zombie.hpp"

void Zombie::setName(const string &new_name) {
	this->_name = new_name;
}

void Zombie::setType(const int &new_type) {
	this->_type = new_type;
}

string Zombie::getName() const {
	return this->_name;
}

int Zombie::getType() const {
	return this->_type;
}

void Zombie::announce() const {
	cout << this->_name << " (" << this->_type << ") Braiiiiiiinnnssss..." << endl;
}

Zombie::Zombie() {
	string names[] = {"Mark", "Sasha", "Igor", "Shamil", "Dimas", "Yul", "Vitaliy", "Kirill", "Dany", "Almaze"};

	srand(time(NULL));
	this->_type = rand() % names->length();
	this->_name = names[this->_type];
}

Zombie::~Zombie() {
	cout << "Zombie " << this->_name << " with type " << this->_type << " is dead!" << endl;
}
