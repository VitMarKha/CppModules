#include "Pony.hpp"

string Pony::getYear() const {
    return _name;
}

string Pony::getName() const {
    return _name;
}

string Pony::getColor() const {
    return _color;
}

void Pony::setYear(const int &new_year) {
    _year = new_year;
}

void Pony::setName(const string &new_name) {
    _name = new_name;
}

void Pony::setColor(const string &new_color) {
    _color = new_color;
}

Pony::Pony() {
    _year = 2;
    _name = "Klara";
    _color = "White";
}

Pony::~Pony() {
    cout << "Pony " << _name << " is cleared" << endl;
}
