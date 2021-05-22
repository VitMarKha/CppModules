#include "Character.hpp"

Character::Character(string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(Character& сharacter) {
	for (int i = 0; i < 4; i++)
        if (this->_materia[i] != nullptr)
            delete this->_materia[i];
	for (int i = 0; i < 4; i++)
        if (сharacter._materia[i] != nullptr)
            this->_materia[i] = сharacter._materia[i];
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
        if (this->_materia[i] != nullptr)
            delete this->_materia[i];
}

Character &Character::operator=(const Character& сharacter) {
    if (сharacter._materia != nullptr) {
		for (int i = 0; i < 4; i++)
            if (this->_materia[i] != nullptr)
                delete this->_materia[i];
		for (int i = 0; i < 4; i++)
            if (сharacter._materia[i] != nullptr)
                this->_materia[i] = сharacter._materia[i];
    }
    return *this;
}

const string &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m) {
	if (!m)
		return;
    if (!this->_materia[0])
        this->_materia[0] = m;
    else if (!this->_materia[1])
        this->_materia[1] = m;
    else if (!this->_materia[2])
        this->_materia[2] = m;
	else if (!this->_materia[3])
		this->_materia[3] = m;
    else
        return;
}

void Character::unequip(int idx) { this->_materia[idx] = nullptr; }

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (this->_materia[idx] != nullptr)
		this->_materia[idx]->use(target);
}
