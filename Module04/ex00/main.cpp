#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
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
	return 0;
}
