#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Pony {
public:
    string  getYear() const;
    string  getName() const;
    string  getColor() const;

    void  setYear(const int &new_year);
    void  setName(const string &new_name);
    void  setColor(const string &new_color);

    Pony();

    ~Pony();

private:
    int     _year;
    string  _name;
    string  _color;

};

#endif
