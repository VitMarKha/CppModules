#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	string* identify();

	Brain getBrain();

private:
	Brain _brain;
};


#endif
