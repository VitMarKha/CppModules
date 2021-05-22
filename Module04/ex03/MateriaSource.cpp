#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource &materiaSource) {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != nullptr)
			delete this->_materia[i];
	for (int i = 0; i < 4; i++)
		if (materiaSource._materia[i] != nullptr)
			this->_materia[i] = materiaSource._materia[i];
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != nullptr)
			delete this->_materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource& materiaSource) {
	if (materiaSource._materia != nullptr) {
		for (int i = 0; i < 4; i++)
			if (this->_materia[i] != nullptr)
				delete this->_materia[i];
		for (int i = 0; i < 4; i++)
			if (materiaSource._materia[i] != nullptr)
				this->_materia[i] = materiaSource._materia[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* aMateria) {
	if (!this->_materia[0])
		this->_materia[0] = aMateria;
	else if (!this->_materia[1])
		this->_materia[1] = aMateria;
	else if (!this->_materia[2])
		this->_materia[2] = aMateria;
	else if (!this->_materia[3])
		this->_materia[3] = aMateria;
	else
		return;
}

AMateria *MateriaSource::createMateria(const string &type) {
	if (type != "ice" && type != "cure")
		return nullptr;
	if (this->_materia[0]->getType() == type)
		return this->_materia[0]->clone();
	else if (this->_materia[1]->getType() == type)
		return this->_materia[1]->clone();
	else if (this->_materia[2]->getType() == type)
		return this->_materia[2]->clone();
	else if (this->_materia[3]->getType() == type)
		return this->_materia[3]->clone();
	else
		return nullptr;
}
