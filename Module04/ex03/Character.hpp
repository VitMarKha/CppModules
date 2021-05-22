#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character(string name);
    Character(Character& сharacter);
    virtual ~Character();
    Character&	operator=(const Character& сharacter);

    virtual const string&   getName() const;

    virtual void            equip(AMateria* m);

    virtual void            unequip(int idx);

    virtual void            use(int idx, ICharacter& target);

private:
    string      _name;
    AMateria*  _materia[4];
};

#endif
