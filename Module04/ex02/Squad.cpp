#include "Squad.hpp"

Squad::Squad() : _count(0), _squad(nullptr) { }

Squad::Squad(Squad& squad) {
	copy_sqad(squad);
}

Squad::~Squad() {
	delete_squad();
}

Squad &Squad::operator=(const Squad &squad) {
	if (this->_squad) {
		delete_squad();
		this->_squad = nullptr;
	}
	copy_sqad(squad);
	return *this;
}

int Squad::getCount() const { return this->_count; }

ISpaceMarine* Squad::getUnit(int i) const {
	if (i < 0 || i > this->_count || this->_count == 0)
		return nullptr;
	return this->_squad[i];
}

int Squad::push(ISpaceMarine *iSpaceMarine) {
	int i;

	if (!iSpaceMarine)
		return this->_count;
	else if (this->_squad) {
		i = -1;
		while (++i < this->_count)
			if (this->_squad[i] == iSpaceMarine)
				return this->_count;
		ISpaceMarine** new_squad = new ISpaceMarine*[this->_count + 1];
		i = -1;
		while (++i < this->_count)
			new_squad[i] = this->_squad[i];
		new_squad[i] = iSpaceMarine;
		++this->_count;
		delete[] this->_squad;
		this->_squad = new_squad;
	} else {
		this->_count = 1;
		this->_squad = new ISpaceMarine*[1];
		this->_squad[0] = iSpaceMarine;
	}
	return this->_count;
}

void Squad::delete_squad() {
	int i;
	if (this->_squad) {
		i = -1;
		while (++i < this->_count) {
			delete this->_squad[i];
		}
		delete[] this->_squad;
	}
}

void Squad::copy_sqad(const Squad& squad) {
	this->_count = 0;
	for (int i = 0; i < squad.getCount(); ++i) {
		this->push(squad.getUnit(i)->clone());
	}
}
