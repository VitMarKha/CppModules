#ifndef EX00_SORCERER_H
#define EX00_SORCERER_H

#include <iostream>

using std::string;

class Sorcerer {
public:
	Sorcerer(const string& name, const string& title);

	Sorcerer(const Sorcerer& sorcerer);

	~Sorcerer();

	Sorcerer&	operator=(const Sorcerer& sorcerer);

	string		getName();

	string		getTitle();

private:
	string	_name;
	string	_title;
};


#endif
