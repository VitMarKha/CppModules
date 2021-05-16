#include <iostream>
#include <fstream>
#include <sstream>

using std::string;
using std::endl;
using std::find;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ostringstream;

static int replace_str(const string& file_name, string& s1, string& s2) {
	size_t 			index;
	string			line;
	string			expansion;
	ostringstream	buf;

	index = 0;
	expansion = ".replace";
	ifstream ifs(file_name);
	if (ifs.fail()) {
		cout << "An error occurred opening the file" << endl;
		return (1);
	}
	buf << ifs.rdbuf();
	line = buf.str();
	ifs.close();
	while (true) {
		index = line.find(s1, index);
		if (index != std::string::npos) {
			line.replace(index, s1.length(), s2);
			index += s2.length();
		} else
			break;
	}
	ofstream ofs((file_name + expansion));
	if (ofs.fail()) {
		cout << "An error occurred create " << file_name + expansion << endl;
		return (1);
	}
	ofs << line << endl;
	ofs.close();
	return (0);
}

int main(int argc, char **argv) {
	string	s1;
	string 	s2;

	if (argc != 4) {
		cout << "Incorrect arguments" << endl;
		return (1);
	} else {
		s1 = argv[2];
		s2 = argv[3];
		if (s1.empty() || s2.empty()) {
			cout << "Incorrect arguments, some empty line" << endl;
			return (1);
		}
	}
	if (replace_str(argv[1], s1, s2))
		return (1);
	return (0);
}
