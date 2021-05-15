#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

#include <iostream>
using std::string;

class Contact {
public:
    string getFirstName() const;
    string getLastName() const;
    string getNickname() const;
    string getPostalAddress() const;
    string getLogin() const;
    string getEmail() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getBirthdayDate() const;
    string getFavoriteMeal() const;
    string getUnderwearColor() const;
    string getDarkestSecret() const;

    void setFirstName(const string& new_first_name);
    void setLastName(const string& new_last_name);
    void setNickname(const string& new_nickname);
    void setPostalAddress(const string& new_postal_address);
    void setLogin(const string& new_email);
    void setEmail(const string& new_login);
    void setAddress(const string& new_address);
    void setPhoneNumber(const string& new_phone_number);
    void setBirthdayDate(const string& new_birthday_date);
    void setFavoriteMeal(const string& new_favorite_meal);
    void setUnderwearColor(const string& new_underwear_color);
    void setDarkestSecret(const string& new_darkest_secret);

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
