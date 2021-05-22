#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure& ice);
	~Cure();
	Cure&	operator=(const Cure& cure);

    virtual AMateria* clone() const;

    virtual void use(ICharacter& target);
};

#endif
