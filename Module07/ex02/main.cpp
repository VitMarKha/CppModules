#include "Array.hpp"

using std::cout;
using std::endl;

int main() {
	{
		cout << "--------TEST-0--------" << endl;
		Array<int>array(20);
		cout << "Len arr int = " << array.size() << endl;
		for (ssize_t i = 0; i < array.size(); ++i) {
			array[i] = i;
			cout << array[i] << ", ";
		}
		cout << endl;
	}
	{
		cout << "--------TEST-1--------" << endl;
		Array<double>array(17);
		cout << "Len arr double = " << array.size() << endl;
		for (ssize_t i = 0; i < array.size(); ++i) {
			array[i] = i + 0.5;
			cout << array[i] << ", ";
		}
		cout << endl;
	}
	{
		cout << "--------TEST-2--------" << endl;
		Array<char>array(3);
		cout << "Len arr char = " << array.size() << endl;
		array[0] = 'a';
		array[1] = 'z';
		array[2] = 'i';
		cout << array[0] << ", " << array[1] << ", " << array[2] << endl;
	}
	{
		cout << "--------TEST-3--------" << endl;
		Array<char>array(3);
		cout << "Len arr char = " << array.size() << endl;
		try {
			array[4] = 'd';
		}
		catch (std::exception& exception) {
			cout << exception.what() << endl;
		}
	}
	{
		cout << "--------TEST-4--------" << endl;
		Array<int>array;
		cout << "Empty array: " << array.size() << endl;
	}
	{
		cout << "--------TEST-5--------" << endl;
		Array<char>array1(3);
		Array<char>array2(4);
		array1[0] = 'a';
		array1[1] = 'z';
		array1[2] = 'i';
		cout << "Old array: " << array1[0] << ", " << array1[1] << ", " << array1[2] << endl;
		array2[0] = 'p';
		array2[1] = 'n';
		array2[2] = 'l';
		array2[3] = 'e';
		cout << "New array: " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << endl;
		array1 = array2;
		cout << "array1 + array2 = ";
		cout << "array1: " << array1[0] << ", " << array1[1] << ", " << array1[2] << ", " << array2[3] << endl;
		cout << "New array no changes: " << array2[0] << ", " << array2[1] << ", " << array2[2] << ", " << array2[3] << endl;
	}
	return 0;
}
