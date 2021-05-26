#ifndef EX02_BASE_HPP
#define EX02_BASE_HPP

#include <iostream>

using std::cout;
using std::endl;

class Base {
public:
	virtual ~Base();
};

class A : public Base {
public:
	virtual ~A();
};

class B : public Base {
public:
	virtual ~B();
};

class C : public Base {
public:
	virtual ~C();
};

#endif
