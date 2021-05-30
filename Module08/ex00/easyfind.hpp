#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <iostream>

using std::find;

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
    typename T::const_iterator iterator = find(array.begin(), array.end(), item);
    if (iterator == array.end())
        throw ExceptionEasyFind("ItemNotFound");
    return *iterator;
}

#endif
