#include <iostream>

using std::string;
using std::cout;
using std::endl;

static void memoryLeak() {
    string* panther = new string("String panther");
    cout << *panther << endl;
    delete panther;
}

int main() {
    memoryLeak();
    while (true) {}
    return 0;
}
