#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <iostream>
#include "ZombieEvent.hpp"

using std::string;
using std::cout;
using std::endl;

class Zombie {
public:
    void setName(const string &new_name);
    void setType(const int &new_type);

    string getName() const;
    int getType() const;

    void announce() const;

private:
    string  _name;
    int     _type;
};

#endif
