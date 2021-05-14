#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

#include <iostream>
using std::string;

class Contact {
public:
    string GetFirstName() const;
    string GetLastName() const;
    string GetNickname() const;
    string GetPostalAddress() const;
    string GetLogin() const;
    string GetEmail() const;
    string GetAddress() const;
    string GetPhoneNumber() const;
    string GetBirthdayDate() const;
    string GetFavoriteMeal() const;
    string GetUnderwearColor() const;
    string GetDarkestSecret() const;

    void SetFirstName(const string& new_first_name);
    void SetLastName(const string& new_last_name);
    void SetNickname(const string& new_nickname);
    void SetPostalAddress(const string& new_postal_address);
    void SetLogin(const string& new_email);
    void SetEmail(const string& new_login);
    void SetAddress(const string& new_address);
    void SetPhoneNumber(const string& new_phone_number);
    void SetBirthdayDate(const string& new_birthday_date);
    void SetFavoriteMeal(const string& new_favorite_meal);
    void SetUnderwearColor(const string& new_underwear_color);
    void SetDarkestSecret(const string& new_darkest_secret);

    Contact& operator=(const Contact& right);

private:
    string _first_name;
    string _last_name;
    string _nickname;
    string _postal_address;
    string _login;
    string _email;
    string _address;
    string _phone_number;
    string _birthday_date;
    string _favorite_meal;
    string _underwear_color;
    string _darkest_secret;
};

#endif
