#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    ~Ice();

    virtual AMateria* clone() const;

    virtual void use(ICharacter& target);
};

#endif
