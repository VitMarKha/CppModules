#ifndef EX04_SCAVTRAP_HPP
#define EX04_SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const string& name);

	ScavTrap(const ScavTrap& scavTrap);

	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& scavTrap);

	void	challengeNewcomer();
};

#endif
