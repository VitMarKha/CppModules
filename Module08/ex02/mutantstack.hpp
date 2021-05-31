#ifndef EX02_MUTANTSTACK_HЗЗ
#define EX02_MUTANTSTACK_HЗЗ

#include <iostream>
#include <stack>
#include <vector>

using std::stack;

template<typename T>
class MutantStack : public stack<T> {
public:
    MutantStack() : stack<T>() { }
    MutantStack(MutantStack& mutantStack) : stack<T>(mutantStack) { }
    virtual ~MutantStack() { }
    MutantStack& operator=(MutantStack& mutantStack) {
        *this = mutantStack;
        return *this;
    }

    typedef typename stack<T>::container_type::iterator iterator;

    iterator begin() {
        return this->c.begin();
    }
    iterator end() {
        return this->c.end();
    }
};

#endif
