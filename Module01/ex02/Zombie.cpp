#include "Zombie.hpp"

void Zombie::setName(const string &new_name) {
    _name = new_name;
}

void Zombie::setType(const int &new_type) {
    _type = new_type;
}

string Zombie::getName() const {
    return _name;
}

int Zombie::getType() const {
    return _type;
}

void Zombie::announce() const {
    cout << getName() << " (" << getType() << ") Braiiiiiiinnnssss..." << endl;
}

Zombie::~Zombie() {
    cout << "Zombie " << this->getName() << "with type " << this->getType() << "is dead!" << endl;
}
