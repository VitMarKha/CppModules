#ifndef EX01_ITER_H
#define EX01_ITER_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template<typename T>
void iter(T* array, int len, void func(const T& arg)) {
	for (int i = 0; i < len; i++)
		func(array[i]);
}

#endif
