#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::string;
using std::cout;
using std::endl;

class ICharacter;

class AMateria {
public:
    AMateria(string const & type);
    virtual ~AMateria();

	const string&  getType() const;

    unsigned int getXP() const;

    virtual AMateria* clone() const = 0;

    virtual void use(ICharacter& target);

protected:
    const string	_type;
    unsigned int	_xp;
};

#endif
