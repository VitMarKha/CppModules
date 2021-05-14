#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(const int &new_type) {
    _type = new_type;
}

Zombie *ZombieEvent::newZombie(string name) {
    Zombie *zombie;
    zombie->setName(name);
    return zombie;
}

Zombie *ZombieEvent::randomChump() {
    string a[10] = {"Mark", "Sasha", "Igor", "Shamil", "Dimas","Yulz", "Vitaliy", "Kiril", "Dany", "Almaze"};
    Zombie *zombie = newZombie(a[rand() % 10]);
    return zombie;
}
