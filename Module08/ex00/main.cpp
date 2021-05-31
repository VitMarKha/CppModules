#include "easyfind.hpp"
#include <vector>
#include <set>

using std::cout;
using std::endl;
using std::vector;
using std::set;

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
            cout << "found: " << num << endl;
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    cout << "---------TEST-2---------" << endl;
    {
        set<int> set;
        for (int i = 0; i < 5; i++) {
            set.insert(i + 5);
            cout << i + 5 << " ";
        }
        cout << endl;
        int search = 8;
        try {
            int num = easyfind(set, search);
            cout << "found: " << num << endl;
        }
        catch (std::exception& exception) {
            cout << exception.what() << endl;
        }
    }
    return 0;
}
