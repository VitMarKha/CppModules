#ifndef EX00_VICTIM_H
#define EX00_VICTIM_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Victim {
public:
	Victim(const string& name);
	Victim(const Victim& victim);
	virtual ~Victim();
	Victim&	operator=(const Victim& victim);

	virtual string	getName() const;

	virtual	void	getPolymorphed() const;

protected:
	string _name;
};

ostream& operator<<(ostream& out, const Victim& victim);

#endif
