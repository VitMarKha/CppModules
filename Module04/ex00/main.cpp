#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

static void my_test() {
	Sorcerer sorcerer("Soer", "Master");
	Victim	victim("Joy");
	Peon peon("Karl");
	cout << "----------------------------" << endl;
	cout << sorcerer;
	cout << victim;
	cout << peon;
	cout << "----------------------------" << endl;
	sorcerer.polymorph(victim);
	sorcerer.polymorph(peon);
	cout << "----------------------------" << endl;
}

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	my_test();
	return 0;
}
