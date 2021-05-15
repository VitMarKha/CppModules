#include "ZombieHorde.hpp"
#include <unistd.h>

int main() {
	ZombieHorde zombieHorde_one = ZombieHorde(2);
	zombieHorde_one.announce();
	usleep(700000);
	ZombieHorde zombieHorde_two = ZombieHorde(5);
	zombieHorde_two.announce();
	return 0;
}
