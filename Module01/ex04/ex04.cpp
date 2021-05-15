#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
	string str = "HI THIS IS BRAIN";
	string* ptr_str = &str;
	string& ref_str = str;

	cout << str << endl;
	cout << *ptr_str << endl;
	cout << ref_str << endl;
	return 0;
}
