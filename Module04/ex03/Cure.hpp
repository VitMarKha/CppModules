#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : AMateria {
public:
    Cure();
    ~Cure();

    virtual AMateria* clone() const;

    virtual void use(ICharacter& target);
};

#endif
