#include "Base.hpp"

Base::~Base() { }

A::~A() { }
B::~B() { }
C::~C() { }

static Base* generate() {
	int rand_num = rand() % 3;

	switch (rand_num) {
		case 0: {
			cout << "Class created: A" << endl;
			return new A;
		}
		case 1: {
			cout << "Class created: B" << endl;
			return new B;
		}
		case 2: {
			cout << "Class created: C" << endl;
			return new C;
		}
		default:
			cout << "Something went wrong with random" << endl;
	}
	return nullptr;
}

static void identify_from_pointer(Base* p) {
	Base *a = dynamic_cast<A*>(p);
	Base *b = dynamic_cast<B*>(p);
	Base *c = dynamic_cast<C*>(p);

	if (a)
		cout << "p ptr = class A" << endl;
	else if (b)
		cout << "p ptr = class B" << endl;
	else if (c)
		cout << "p ptr = class C" << endl;
	else
		cout << "Unexpected error in identify_from_pointer" << endl;
}

static void identify_from_reference(Base& p) {
	try {
		Base &a = dynamic_cast<A&>(p);
		(void)a;
		cout << "p ref = class A" << endl;
	}
	catch (std::exception& exception) {
		try {
			Base &b = dynamic_cast<B&>(p);
			(void)b;
			cout << "p ref = class B" << endl;
		}
		catch (std::exception& exception1) {
			try {
				Base &c = dynamic_cast<C&>(p);
				(void)c;
				cout << "p ref = class C" << endl;
			}
			catch (std::exception& exception2) {
				cout << "Unexpected error in identify_from_reference" << endl;
			}
		}
	}
}

int main() {
	srand(time(NULL));

	Base* base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}
