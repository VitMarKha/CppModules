#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon {
public:
	string getType() const;

	void setType(const string& new_type);

	Weapon();

	Weapon(const string& new_type);

	~Weapon();

private:
	string _type;
};

#endif
