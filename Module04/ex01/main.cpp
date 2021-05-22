#include <iostream>
#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

using std::string;
using std::cout;
using std::endl;

static void my_test() {
	Character* me = new Character("me");
	cout << *me;
	Enemy* b = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	cout << *me;
	me->equip(pf);
	me->attack(b);
	cout << *me;
	me->equip(pr);
	cout << *me;
	me->attack(b);
	cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->recoverAP();
	me->attack(b);
	delete b;
	delete pr;
	delete pf;
}

int main() {
	Character* me = new Character("me");
	cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	cout << *me;
	me->equip(pf);
	me->attack(b);
	cout << *me;
	me->equip(pr);
	cout << *me;
	me->attack(b);
	cout << *me;
	me->attack(b);
	cout << *me;
	delete b;
	delete pr;
	delete pf;
	my_test();
	return 0;
}
