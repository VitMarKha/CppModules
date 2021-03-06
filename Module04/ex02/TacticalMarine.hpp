#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& tacticalMarine);
	~TacticalMarine();
	TacticalMarine&	operator=(const TacticalMarine& tacticalMarine);

	virtual ISpaceMarine* clone() const;

	virtual void battleCry() const;

	virtual void rangedAttack() const;

	virtual void meleeAttack() const;
};

#endif
