#include "easyfind.hpp"
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    cout << "---------TEST-0---------" << endl;
    {
        vector<int> vector;
        for (int i = 0; i < 5; i++) {
            vector.push_back(i + 2);
            cout << i + 2 << " ";
        }
        cout << endl;
        int search = 4;
        int num = easyfind(vector, search);
        cout << "found: " << num << endl;
    }
    cout << "---------TEST-1---------" << endl;
    {
        vector<int> vector;
        for (int i = 0; i < 5; i++) {
            vector.push_back(i + 5);
            cout << i + 5 << " ";
        }
        cout << endl;
        int search = 28;
        try {
            int num = easyfind(vector, search);
            cout << " found: " << num << endl;
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    return 0;
}
