#include "Brain.hpp"

string Brain::identify() {
	ostringstream oss;

	oss << this;
	return oss.str();
}

Brain::Brain() {
	this->_iq = 0;
}

Brain::Brain(const int &new_iq) {
	this->_iq = new_iq;
}
