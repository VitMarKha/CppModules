#include "Phonebook_class.hpp"

void Phonebook::SetContact(const Contact& contact, const int& number) {
    _contacts[number] = contact;
}

Contact Phonebook::GetContact(const int &number) const {
    return _contacts[number];
}
