#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class FragTrap : public ClapTrap {
public:
	FragTrap(const string& name);

	FragTrap(const FragTrap& fragTrap);

	~FragTrap();

	FragTrap& operator=(const FragTrap& fragTrap);

	void vaulthunter_dot_exe(const string& target);
};


#endif
