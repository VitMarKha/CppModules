#include "Fixed.class.hpp"

Fixed::Fixed() : _fix_point(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	cout << "Assignation operator called" << endl;
	this->_fix_point = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	return this->_fix_point;
}

void Fixed::setRawBits(const int raw) {
	cout << "getRawBits member function called" << endl;
	this->_fix_point = raw;
}

int Fixed::bits = 8;

Fixed::Fixed(const int raw_int) {
	cout << "Int constructor called" << endl;
	this->_fix_point = raw_int * (1 << bits);
}

Fixed::Fixed(const float raw_float) {
	cout << "Float constructor called" << endl;
	this->_fix_point = roundf(raw_float * (1 << bits));
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_fix_point) / (1 << bits);
}

int Fixed::toInt() const {
	return this->_fix_point / (1 << bits);
}

ostream& operator<<(ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
