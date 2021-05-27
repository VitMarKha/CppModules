#include "whatever.hpp"

int main() {
	cout << "-------MYTEST-------" << endl;
	cout << "--------SWAP--------" << endl;
	{
		cout << "--------int---------" << endl;
		int one = 21;
		int two = 42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "Calling function swap" << endl;
		swap(one, two);
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
	}
	{
		cout << "--------double------" << endl;
		double one = 21.21;
		double two = 42.42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "Calling function swap" << endl;
		swap(one, two);
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
	}
	{
		cout << "--------char--------" << endl;
		char one = 'a';
		char two = 'b';
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "Calling function swap" << endl;
		swap(one, two);
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
	}
	{
		cout << "--------string------" << endl;
		string one = "abc";
		string two = "xyz";
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "Calling function swap" << endl;
		swap(one, two);
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
	}
	cout << "--------MIN---------" << endl;
	{
		cout << "--------int---------" << endl;
		int one = 21;
		int two = 42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "min = " << min(one, two) << endl;
	}
	{
		cout << "--------double------" << endl;
		double one = 21.21;
		double two = 42.42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "min = " << min(one, two) << endl;
	}
	{
		cout << "--------char--------" << endl;
		char one = 'a';
		char two = 'b';
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "min = " << min(one, two) << endl;
	}
	{
		cout << "--------string------" << endl;
		string one = "abc";
		string two = "xyz";
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "min = " << min(one, two) << endl;
	}
	cout << "--------MAX---------" << endl;
	{
		cout << "--------int---------" << endl;
		int one = 21;
		int two = 42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "max = " << max(one, two) << endl;
	}
	{
		cout << "--------double------" << endl;
		double one = 21.21;
		double two = 42.42;
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "max = " << max(one, two) << endl;
	}
	{
		cout << "--------char--------" << endl;
		char one = 'a';
		char two = 'b';
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "max = " << max(one, two) << endl;
	}
	{
		cout << "--------string------" << endl;
		string one = "abc";
		string two = "xyz";
		cout << "one = " << one << endl;
		cout << "two = " << two << endl;
		cout << "max = " << max(one, two) << endl;
	}
	cout << "--------SUBJECT-TEST---------" << endl;
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	return 0;
}
