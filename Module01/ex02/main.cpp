#include <iostream>
#include "ZombieEvent.hpp"

int main() {
    ZombieEvent zombieEv;
    Zombie *zombie_one = zombieEv.randomChump(0);
    Zombie *zombie_two = zombieEv.randomChump(3);
    Zombie *zombie_three = zombieEv.randomChump(5);
    return 0;
}
