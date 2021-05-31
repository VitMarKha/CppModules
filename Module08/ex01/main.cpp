#include "span.hpp"

using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    cout << "---------TEST-0---------" << endl;
    {
        Span sp(1000);
        for (int i = 0; i < 1000; ++i) {
            sp.addNumber(i + rand() % 10);
        }
        cout << "short: " << sp.shortestSpan() << endl;
        cout << "longest: " << sp.longestSpan() << endl;
    }
    cout << "---------TEST-1---------" << endl;
    {
        Span sp(5);
        for (int i = 0; i < 5; ++i) {
            sp.addNumber(i + rand() % 10);
            cout << sp[i] << " ";
        }
        cout << endl;
        cout << "short: " << sp.shortestSpan() << endl;
        cout << "longest: " << sp.longestSpan() << endl;
    }
    cout << "---------TEST-2---------" << endl;
    {
        Span sp(5);
        for (int i = 0; i < 5; ++i) {
            sp.addNumber(i + rand() % 10);
            cout << sp[i] << " ";
        }
        cout << endl;
        cout << "short: " << sp.shortestSpan() << endl;
        cout << "longest: " << sp.longestSpan() << endl;
    }
    cout << "---------TEST-3---------" << endl;
    {
        try {
            Span sp(5);
            sp[9];
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    cout << "---------TEST-4---------" << endl;
    {
        try {
            Span sp(1);
            sp.longestSpan();
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    cout << "---------TEST-5---------" << endl;
    {
        try {
            Span sp(2);
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    cout << "--------SUBJTEST--------" << endl;
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        cout << sp.shortestSpan() << endl;
        cout << sp.longestSpan() << endl;
    }
    return 0;
}
