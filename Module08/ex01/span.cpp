#include "span.hpp"

Span::Span(unsigned int size) : _size(size), _count(0) {
    for (unsigned int i = 0; i < this->_size; ++i) {
        this->_nums.push_back(0);
    }
}

Span::Span(const Span &span) { *this = span; }

Span::~Span() { }

Span &Span::operator=(const Span &span) {
    this->_size = span._size;
    this->_count = span._count;
    this->_nums = span._nums;
    return *this;
}

void Span::addNumber(const int n) {
    if (this->_count >= this->_size)
        throw ExceptionSpan("LimitExceeded");
    this->_nums[this->_count] = n;
    ++this->_count;
}

int Span::shortestSpan() {
    int result;

    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("NotEnoughElementsInTheArray");
    vector<int>::const_iterator first = this->_nums.begin();
    vector<int>::const_iterator next = this->_nums.begin() + 1;
    vector<int>::const_iterator iterator = this->_nums.begin();
    result = abs(*next - *first);
    while (iterator != this->_nums.end()) {
        first = iterator;
        ++iterator;
        next = iterator;
        if (next == this->_nums.end())
            return result;
        int tmp = abs(*first - *next);
        if (tmp < result)
            result = tmp;
    }
    return (result);
}

int Span::longestSpan() {
    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("NotEnoughElementsInTheArray");
    int min = *min_element(this->_nums.begin(), this->_nums.end());
    int max = *max_element(this->_nums.begin(), this->_nums.end());
    return abs(max - min);
}

int Span::operator[](const int index) {
    if (index < 0 || (const unsigned int)index > this->_size)
        throw ExceptionSpan("GoingOutOfTheArray");
    return this->_nums[index];
}

Span::ExceptionSpan::ExceptionSpan(const char *error) : _error(error) { }

const char *Span::ExceptionSpan::what() const throw() { return this->_error; }
