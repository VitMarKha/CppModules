#include "iter.hpp"

template<typename T>
static void say_hello(const T& arg) {
	(void)arg;
	cout << "hello" << endl;
}

template<typename T>
static void it_is(const T& arg) {
	cout << "it_is: " << arg << endl;
}

int main() {
	{
		cout << "--------TEST-0--------" << endl;
		int array[8] = {1, 2, 3, 4, 5, 6, 7};
		iter(array, 8, say_hello);
	}
	{
		cout << "--------TEST-1--------" << endl;
		char array[8] = {'a', 'g', 'x', 'v', 'r', 'm', 'z'};
		iter(array, 8, it_is);
	}
	{
		cout << "--------TEST-2--------" << endl;
		double array[3] = {42.123, 21.52, 24.52};
		iter(array, 3, it_is);
	}
	return 0;
}
