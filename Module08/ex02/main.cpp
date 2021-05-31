#include "mutantstack.hpp"

using std::cout;
using std::endl;

int main() {
    cout << "---------TEST-0---------" << endl;
    {
        MutantStack<double>m;
        cout << m.size() << endl;
        for (int i = 0; i < 10; ++i) {
            m.push(i);
        }
        MutantStack<double>::iterator it = m.begin();
        for (; it < m.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "--------SUBJTEST--------" << endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        cout << mstack.top() << endl;
        mstack.pop();
        cout << mstack.size() << endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            cout << *it << endl;
            ++it;
        }
        stack<int> s(mstack);
    }
    return 0;
}
