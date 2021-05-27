#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

#include <iostream>

template<class T>
class Array {
private:
	ssize_t	_len;
	T*		_data;

public:
	Array();
	Array(ssize_t len);
	Array(Array& array);
	Array<T>& operator=(const Array& array);
	~Array();

	T& operator[](int index);

	unsigned int	size();

	class ExceptionArray : public std::exception {
	public:
		ExceptionArray(const char* error);
		virtual const char* what() const throw();
	private:
		const char* _error;
	};
};

template<typename T>
Array<T>::Array() {
	this->_len = 0;
	this->_data = nullptr;
}

template<typename T>
Array<T>::Array(ssize_t len) {
	this->_len = len;
	this->_data = new T[len]();
};

template<typename T>
Array<T>::Array(Array& array) { *this = array; }

template<typename T>
Array<T>& Array<T>::operator=(const Array& array) {
	if (this->_data)
		delete [] this->_data;
	this->_data = nullptr;
	this->_len = array._len;
	if (this->_len) {
		T* tmp = new T[array._len]();
		for (ssize_t i = 0; i < array._len; ++i)
			tmp[i] = array._data[i];
		this->_data = tmp;
	}
	return *this;
}

template<class T>
Array<T>::~Array() {
	if (this->_data)
		delete [] this->_data;
}

template<typename T>
unsigned int Array<T>::size() { return this->_len; }

template<class T>
T& Array<T>::operator[](int index) {
	if (index < 0 || index > (int)this->size())
		throw ExceptionArray("A number is served outside the array");
	return this->_data[index];
}

template<class T>
Array<T>::ExceptionArray::ExceptionArray(const char* error) : _error(error) { }

template<class T>
const char *Array<T>::ExceptionArray::what() const throw() { return this->_error; }

#endif
