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

static void replace_str(char **argv, string& s1, string& s2) {
	char				check;
	size_t 				index;
	string				line;
	std::ostringstream	buf;
	string				expansion = ".replace";

	index = 0;
	ifstream ifs(argv[1]);
	buf << ifs.rdbuf();
	line = buf.str();
	ifs.close();
	while (true) {
		index = line.find(s1, index);
		if (index == std::string::npos)
			break;
		line.replace(index, s2.length(), s2);
		check = line[index];
		while (check == line[index])
			++index;
	}
	ofstream ofs((argv[1] + expansion));
	ofs << line << endl;
	ofs.close();
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
			cout << "Incorrect arguments" << endl;
			return (1);
		}
	}
	replace_str(argv, s1, s2);
	return (0);
}
