#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::min_element;
using std::max_element;

class Span {
public:
    Span(unsigned int size);
    Span(const Span& span);
    ~Span();
    Span& operator=(const Span& span);

    void addNumber(const int n);

    int shortestSpan();

    int longestSpan();

private:
    unsigned int  _size;
    unsigned int  _count;
    vector<int>   _nums;

    class ExceptionSpan : public std::exception {
    public:
        ExceptionSpan(const char* error);
        virtual const char* what() const throw();
    private:
        const char* _error;
    };
};

#endif
