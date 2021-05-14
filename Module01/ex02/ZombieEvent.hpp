#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

using std::string;

class ZombieEvent {
public:
    void setZombieType(const int &new_type);

    Zombie *newZombie(const string &name) const;

    Zombie *randomChump(const int &rand_num);

private:
    int _type;

};

#endif
