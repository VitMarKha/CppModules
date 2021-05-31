#include "span.hpp"

using std::cout;
using std::endl;

int main() {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    cout << sp.shortestSpan() << endl;
    cout << sp.longestSpan() << endl;
    return 0;
}
