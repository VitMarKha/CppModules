#include "Pony.hpp"

static Pony *ponyOnTheHeap() {
    Pony *pony = new Pony;
    cout << "Pony on Heap create!" << endl;
    return pony;
}

static Pony ponyOnTheStack() {
    Pony pony;
    cout << "Pony on Stack create!" << endl;
    return pony;
}

int main() {
    Pony *pony_one = ponyOnTheHeap();
    Pony pony_two = ponyOnTheStack();

    cout << "1" << endl;
    pony_one->setName("Jonny");
    delete pony_one;
    cout << "1" << endl;
    cout << "2" << endl;
    return 0;
}
