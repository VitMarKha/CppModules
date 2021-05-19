#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(const string& name);

	NinjaTrap(const NinjaTrap& ninjaTrap);

	~NinjaTrap();

	NinjaTrap& operator=(const NinjaTrap& ninjaTrap);

	void ninjaShoebox(FragTrap& fragTrap) const;

	void ninjaShoebox(ScavTrap& scavTrap) const;
};

#endif
