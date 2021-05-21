#include "Character.hpp"

Character::Character(const string &name) : _name(name), _ap(40), _aWeapon(NULL) { }

Character::Character(Character &character) { *this = character; }

Character::~Character() { }

Character& Character::operator=(const Character &character) {
	this->_name = character._name;
	return *this;
}

void Character::recoverAP() {
	if (this->_ap == 40)
		return;
	else {
		this->_ap += 10;
		if (this->_ap > 40)
			this->_ap = 40;
	}
}

void Character::attack(Enemy* enemy) {
	if (this->_aWeapon != NULL && this->_ap > 0) {
		if (this->_aWeapon->getAPCost() > this->_ap) {
			cout << "Not enough energy" << endl;
		} else {
			cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->_aWeapon->getName() << endl;
			_aWeapon->attack();
			enemy->takeDamage(_aWeapon->getDamage());
			this->_ap -= this->_aWeapon->getAPCost();
		}
	} else
		cout << "No weapons or not enough action points" << endl;
}

void Character::equip(AWeapon* aWeapon) { this->_aWeapon = aWeapon; }

string Character::getName() const { return this->_name; }

int Character::getAP() const { return this->_ap; }

string Character::getAWeapon() const {
	if (this->_aWeapon == NULL)
		return "NULL";
	return this->_aWeapon->getName();
}

ostream& operator<<(ostream& out, const Character& character) {
	if (character.getAWeapon() != "NULL") {
		cout << character.getName() << " has " << character.getAP() << " AP and wields a " \
		<< character.getAWeapon() << endl;
	}
	else
		cout << character.getName() << " has " << character.getAP() << " AP and is unarmed" << endl;
	return out;
}
