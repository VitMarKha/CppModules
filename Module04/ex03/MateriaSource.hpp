#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(MateriaSource& materiaSource);
	virtual ~MateriaSource();
	MateriaSource&	operator=(const MateriaSource& materiaSource);

	virtual void learnMateria(AMateria* aMateria);

	virtual AMateria* createMateria(string const &type);

private:
	AMateria* _materia[4];
};

#endif
