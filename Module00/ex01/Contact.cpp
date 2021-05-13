#include "Contact.hpp"
#include <iostream>

string Contact::GetFirstName() const {
	return _first_name;
}

string Contact::GetLastName() const {
	return _last_name;
}

string Contact::GetNickname() const {
	return _nickname;
}

string Contact::GetPostalAddress() const {
	return _postal_address;
}

string Contact::GetLogin() const {
	return _login;
}

string Contact::GetEmail() const {
	return _email;
}

string Contact::GetAddress() const {
	return _address;
}

string Contact::GetPhoneNumber() const {
	return _phone_number;
}

string Contact::GetBirthdayDate() const {
	return _birthday_date;
}

string Contact::GetFavoriteMeal() const {
	return _favorite_meal;
}

string Contact::GetUnderwearColor() const {
	return _underwear_color;
}

string Contact::GetDarkestSecret() const {
	return _darkest_secret;
}

void Contact::SetFirstName(const string& new_first_name) {
	_first_name = new_first_name;
}

void Contact::SetLastName(const string& new_last_name) {
	_last_name = new_last_name;
}

void Contact::SetNickname(const string& new_nickname) {
	_nickname = new_nickname;
}

void Contact::SetPostalAddress(const string &new_postal_address) {
	_postal_address = new_postal_address;
}

void Contact::SetLogin(const string& new_email) {
	_email = new_email;
}

void Contact::SetEmail(const string &new_login) {
	_login = new_login;
}

void Contact::SetAddress(const string &new_address) {
	_address = new_address;
}

void Contact::SetPhoneNumber(const string &new_phone_number) {
	_phone_number = new_phone_number;
}

void Contact::SetBirthdayDate(const string &new_birthday_date) {
	_birthday_date = new_birthday_date;
}

void Contact::SetFavoriteMeal(const string &new_favorite_meal) {
	_favorite_meal = new_favorite_meal;

}

void Contact::SetUnderwearColor(const string &new_underwear_color) {
	_underwear_color = new_underwear_color;
}

void Contact::SetDarkestSecret(const string &new_darkest_secret) {
	_darkest_secret = new_darkest_secret;
}

Contact& Contact::operator=(const Contact& right) {
	this->SetFirstName(right.GetFirstName());
	this->SetLastName(right.GetLastName());
	this->SetNickname(right.GetNickname());
	this->SetLogin(right.GetLogin());
	this->SetPostalAddress(right.GetPostalAddress());
	this->SetEmail(right.GetEmail());
	this->SetAddress(right.GetAddress());
	this->SetPhoneNumber(right.GetPhoneNumber());
	this->SetBirthdayDate(right.GetBirthdayDate());
	this->SetFavoriteMeal(right.GetFavoriteMeal());
	this->SetUnderwearColor(right.GetUnderwearColor());
	this->SetDarkestSecret(right.GetDarkestSecret());
	return *this;
}
