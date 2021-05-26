#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct Data {
	string	one_str;
	int		num;
	string	two_str;
};

static void* serialize() {
	char symbols[64] = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *result = new char[sizeof(char*) + sizeof(int) + sizeof(char*)];
	int rand_num;

	rand_num = rand();
	for (size_t i = 0; i < sizeof(char*); i++)
		result[i] = symbols[rand() % strlen(symbols)];
	memcpy(result + sizeof(char*), &rand_num, sizeof(int));
	for (size_t i = 0; i < sizeof(char*); i++)
		result[i + sizeof(char*) + sizeof(int)] = symbols[rand() % strlen(symbols)];
	return static_cast<void*>(result);
}

static Data* deserialize(void* raw) {
	Data *out = new Data;
	out->one_str = string(reinterpret_cast<char*>(raw), 8);
	out->num = *(reinterpret_cast<int*>(raw) + 2);
	out->two_str = string(reinterpret_cast<char*>(raw) + 12, 8);
	return out;
}

int main() {
	srand(time(NULL));
	Data*	data;
	void*	serial;

	serial = serialize();
	data = deserialize(serial);
	cout << "data->one_str: " << data->one_str << endl;
	cout << "data->num: " << data->num << endl;
	cout << "data->two_str: " << data->two_str << endl;
	return 0;
}
