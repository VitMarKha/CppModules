#ifndef EX01_FIXED_CLASS_HPP
#define EX01_FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

using	std::cout;
using	std:: endl;
using	std::ostream;

class Fixed {
public:
	Fixed();

	Fixed(const Fixed& fixed);

	~Fixed();

	Fixed(const int raw_int);

	Fixed(const float raw_float);

	float	toFloat() const;

	int		toInt() const;

	Fixed&	operator=(const Fixed& fixed);

	int		getRawBits() const;

	void	setRawBits(const int raw);

private:
	int			_fix_point;
	static int	bits;
};

ostream& operator<<(ostream& out, const Fixed& fixed);

#endif
