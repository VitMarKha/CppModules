#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const string& name);

	SuperTrap(const SuperTrap& superTrap);

	~SuperTrap();

	SuperTrap& operator=(const SuperTrap& superTrap);
};

#endif
