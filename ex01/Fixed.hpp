#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{
	private:
		int 				_value;
		static const int 	_bits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &fixed);
		Fixed &operator=(Fixed const &fixed);
		~Fixed();
		

		int getRawBits(void) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};
	
	std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif