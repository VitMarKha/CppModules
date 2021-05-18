#ifndef EX00_FIXED_CLASS_HPP
#define EX00_FIXED_CLASS_HPP

#include <iostream>

using std::cout;
using std:: endl;

class Fixed {
public:
	Fixed();

	Fixed(const Fixed& fixed);

	~Fixed();

	Fixed&	operator=(const Fixed& fixed);

	int		getRawBits() const;

	void	setRawBits(const int raw);

private:
	int fix_point;
	static int bits;
};

#endif
