#ifndef EX02_ISPACEMARINE_HPP
#define EX02_ISPACEMARINE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}

	virtual ISpaceMarine* clone() const = 0;

	virtual void battleCry() const = 0;

	virtual void rangedAttack() const = 0;

	virtual void meleeAttack() const = 0;

};

#endif
