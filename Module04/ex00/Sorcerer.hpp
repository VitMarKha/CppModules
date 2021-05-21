#ifndef EX00_SORCERER_H
#define EX00_SORCERER_H

#include <iostream>
#include "Victim.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Sorcerer {
public:
	Sorcerer(const string& name, const string& title);
	Sorcerer(const Sorcerer& sorcerer);
	~Sorcerer();
	Sorcerer&	operator=(const Sorcerer& sorcerer);

	string		getName() const;

	string		getTitle() const;

	void		polymorph(const Victim& victim) const;

private:
	string	_name;
	string	_title;
};

ostream& operator<<(ostream& out, const Sorcerer& sorcerer);

#endif
