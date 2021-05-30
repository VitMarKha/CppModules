#include "span.hpp"

Span::Span(unsigned int size) : _size(size), _count(0), _nums(size) { }

Span::~Span() { }

void Span::addNumber(const int n) {
    if (this->_count >= this->_size)
        throw ExceptionSpan("LimitExceeded");
    this->_nums.push_back(n);
    ++this->_count;
}

int Span::shortestSpan() {
    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("NotEnoughElementsInTheArray");

}

int Span::longestSpan() {
    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("NotEnoughElementsInTheArray");
    int min = *min_element(this->_nums.begin(), this->_nums.end());
    int max = *max_element(this->_nums.begin(), this->_nums.end());
    return (max - min);
}

Span::ExceptionSpan::ExceptionSpan(const char *error) : _error(error) { }

const char *Span::ExceptionSpan::what() const throw() { return this->_error; }
