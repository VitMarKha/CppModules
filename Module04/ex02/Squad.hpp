#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {
public:
	Squad();
	Squad(Squad& squad);
	~Squad();
	Squad&	operator=(const Squad& squad);

	virtual int getCount() const;

	virtual ISpaceMarine* getUnit(int i) const;

	virtual int push(ISpaceMarine* iSpaceMarine);

private:
	int				_count;
	ISpaceMarine**	_squad;
	void 			copy_sqad(const Squad& squad);
	void			delete_squad();
};

#endif
