#ifndef EX00_PEON_H
#define EX00_PEON_H

#include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(const string& name);
	Peon(const Peon& peon);
	virtual ~Peon();
	Peon&	operator=(const Peon& peon);

	virtual void	getPolymorphed() const;
};

#endif
