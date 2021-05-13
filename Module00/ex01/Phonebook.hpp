#ifndef EX01_PHONEBOOK_HPP
#define EX01_PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
public:

	Contact GetContact(const int& number) const;

	void SetContact(const Contact& contact, const int& number);

private:
	Contact _contacts[8];
};

#endif
