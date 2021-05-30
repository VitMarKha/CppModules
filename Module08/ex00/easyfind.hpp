#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <iostream>

class ExceptionEasyFind : public std::exception {
public:
    ExceptionEasyFind(const char* error);
    virtual const char* what() const throw();
private:
    const char* _error;
};

ExceptionEasyFind::ExceptionEasyFind(const char *error) : _error(error) { }

const char* ExceptionEasyFind::what() const throw() { return this->_error; }

template<typename T>
int easyfind(T& array, int item) {
    typename T::const_iterator iterator;
    int index = 0;
    for (iterator = array.begin(); iterator != array.end(); ++iterator) {
        if (*iterator == item)
            return index;
        ++index;
    }
    throw ExceptionEasyFind("ItemNotFound");
    return -1;
}

#endif
