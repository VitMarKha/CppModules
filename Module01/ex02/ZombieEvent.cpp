#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(const int &new_type) {
    _type = new_type;
}

Zombie *ZombieEvent::newZombie(const string &name) const {
    Zombie *zombie = new Zombie;
    zombie->setName(name);
    zombie->setType(_type);
    return zombie;
}

Zombie *ZombieEvent::randomChump(const int &rand_num) {
    Zombie *zombie;

    srand(time(NULL));
    this->setZombieType(rand_num);
    string names[10] = {"Mark", "Sasha", "Igor", "Shamil", "Dimas","Yulz", "Vitaliy", "Kiril", "Dany", "Almaze"};
    if (rand_num < 10)
        zombie = newZombie(names[rand() % (10 - rand_num)]);
    else
        zombie = newZombie(names[rand() % 10]);
    zombie->announce();
    return zombie;
}
