#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;
using std::string;

static void print_res() {
	cout << "char: " << endl;
	cout << "int: " << endl;
	cout << "float: " << endl;
	cout << "double: " << endl;
}

int main(int argc, char** argv) {
	if (argc != 2)
		return 0;
	string name = typeid(argv[1]).name();
	int x = atoi(argv[1]);
	float y;
	double z;
	char c;
	cout << name << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(c).name() << endl;



//	print_res();
	return 0;
}
