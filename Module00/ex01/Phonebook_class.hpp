#ifndef EX01_PHONEBOOK_HPP
#define EX01_PHONEBOOK_HPP

#include "Contact_class.hpp"

class Phonebook {
public:

    Contact getContact(const int& number) const;

    void setContact(const Contact& contact, const int& number);

private:
    Contact _contacts[8];
};

#endif
