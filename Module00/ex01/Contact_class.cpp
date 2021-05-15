#include "Contact_class.hpp"
#include <iostream>

string Contact::getFirstName() const {
    return _first_name;
}

string Contact::getLastName() const {
    return _last_name;
}

string Contact::getNickname() const {
    return _nickname;
}

string Contact::getPostalAddress() const {
    return _postal_address;
}

string Contact::getLogin() const {
    return _login;
}

string Contact::getEmail() const {
    return _email;
}

string Contact::getAddress() const {
    return _address;
}

string Contact::getPhoneNumber() const {
    return _phone_number;
}

string Contact::getBirthdayDate() const {
    return _birthday_date;
}

string Contact::getFavoriteMeal() const {
    return _favorite_meal;
}

string Contact::getUnderwearColor() const {
    return _underwear_color;
}

string Contact::getDarkestSecret() const {
    return _darkest_secret;
}

void Contact::setFirstName(const string& new_first_name) {
    _first_name = new_first_name;
}

void Contact::setLastName(const string& new_last_name) {
    _last_name = new_last_name;
}

void Contact::setNickname(const string& new_nickname) {
    _nickname = new_nickname;
}

void Contact::setPostalAddress(const string &new_postal_address) {
    _postal_address = new_postal_address;
}

void Contact::setLogin(const string& new_email) {
    _email = new_email;
}

void Contact::setEmail(const string &new_login) {
    _login = new_login;
}

void Contact::setAddress(const string &new_address) {
    _address = new_address;
}

void Contact::setPhoneNumber(const string &new_phone_number) {
    _phone_number = new_phone_number;
}

void Contact::setBirthdayDate(const string &new_birthday_date) {
    _birthday_date = new_birthday_date;
}

void Contact::setFavoriteMeal(const string &new_favorite_meal) {
    _favorite_meal = new_favorite_meal;

}

void Contact::setUnderwearColor(const string &new_underwear_color) {
    _underwear_color = new_underwear_color;
}

void Contact::setDarkestSecret(const string &new_darkest_secret) {
    _darkest_secret = new_darkest_secret;
}

Contact& Contact::operator=(const Contact& right) {
	this->setFirstName(right.getFirstName());
	this->setLastName(right.getLastName());
	this->setNickname(right.getNickname());
	this->setLogin(right.getLogin());
	this->setPostalAddress(right.getPostalAddress());
	this->setEmail(right.getEmail());
	this->setAddress(right.getAddress());
	this->setPhoneNumber(right.getPhoneNumber());
	this->setBirthdayDate(right.getBirthdayDate());
	this->setFavoriteMeal(right.getFavoriteMeal());
	this->setUnderwearColor(right.getUnderwearColor());
	this->setDarkestSecret(right.getDarkestSecret());
    return *this;
}
