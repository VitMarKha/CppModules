#include <iostream>
#include <tgmath.h>

using std::cout;
using std::endl;
using std::string;

static void printChar(string a) {
	int c;

	try {
		c = stoi(a);
		if (c < -127 || c > 127) {
			cout << "char: impossible" << endl;
			return;
		}
		else if (c < 32 || c > 126) {
			cout << "char: Non displayable" << endl;
			return;
		}
		cout << "char: " << "\'" << static_cast<char>(c) << "\'" << endl;
	}
	catch (std::exception& exception) {
		cout << "char: impossible" << endl;
	}
}

static void printInt(string a) {
	int i;

	try {
		i = stoi(a);
		cout << "int: " << static_cast<int>(i) << endl;
	}
	catch (std::exception& exception) {
		cout << "int: impossible" << endl;
	}
}

static void printFloat(string a) {
	float f;

	try {
		f = stof(a);
		f = static_cast<float>(f);
		cout << "float: " << f;
		if (fabs(f - round(f)) < 0.0001)
			cout << ".0";
		cout << "f" << std::endl;
	}
	catch (std::exception& exception) {
		cout << "float: impossible" << endl;
	}
}

static void printDouble(string a) {
	double d;

	try {
		d = stod(a);
		d = static_cast<double>(d);
		cout << "double: " << d;
		if (fabs(d - round(d)) < 0.0001)
			cout << ".0";
		cout << endl;
	}
	catch (std::exception& exception) {
		cout << "double: impossible" << endl;
	}
}

int main(int argc, char** argv) {
	if (argc != 2) {
		cout << "Incorrect number of arguments, must be 1 argument" << endl;
		return 1;
	}
	string arg = argv[1];
	printChar(arg);
	printInt(arg);
	printFloat(arg);
	printDouble(arg);
	return 0;
}
