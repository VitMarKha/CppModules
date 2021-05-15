#include "Human.hpp"

string *Human::identify() {
	return this->_brain.identify();
}

Brain Human::getBrain() {
	return this->_brain;
}
