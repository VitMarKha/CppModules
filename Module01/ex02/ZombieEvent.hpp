#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"
using std::string;

class ZombieEvent {
    void setZombieType(const int &new_type);

    Zombie *newZombie(string name);

    Zombie *randomChump();

private:
    int _type;

};

#endif
