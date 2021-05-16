#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <iostream>
#include <sstream>

using std::ostringstream;
using std::string;
using std::cout;
using std::endl;

class Brain {
public:
	string identify();

	Brain();

	Brain(const int& new_iq);

private:
	int _iq;
};

#endif
