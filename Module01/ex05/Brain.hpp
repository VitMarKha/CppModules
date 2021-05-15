#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain {
public:
	string* identify();

private:
	string *_id;
};

#endif
