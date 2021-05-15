#include "Phonebook_class.hpp"

void Phonebook::setContact(const Contact& contact, const int& number) {
    _contacts[number] = contact;
}

Contact Phonebook::getContact(const int &number) const {
    return _contacts[number];
}
