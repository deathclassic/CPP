#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {	
		static const int	_bits = 8;
		int					_fixed_point;
	public:
		Fixed();
		Fixed(Fixed const &);
		Fixed(const int &);
		Fixed(const float &);

		Fixed	const &operator=(Fixed const &);
		Fixed	const operator+(Fixed const &);
		Fixed 	const operator-(Fixed const &);
		Fixed 	const operator*(Fixed const &);
		Fixed 	const operator/(Fixed const &);

		bool operator>(Fixed const &) const;
		bool operator<(Fixed const &) const;
		bool operator>=(Fixed const &) const;
		bool operator<=(Fixed const &) const;
		bool operator==(Fixed const &) const;
		bool operator!=(Fixed const &) const;

		Fixed const operator++(void);
		Fixed const operator--(void);
		Fixed const operator++(int);
		Fixed const operator--(int);

		Fixed static const &max(Fixed const &, Fixed const &);
		Fixed static const &min(Fixed const &, Fixed const &);
		Fixed static &max(Fixed &, Fixed &);
		Fixed static &min(Fixed &, Fixed &);

		int toInt(void) const;
		float toFloat(void) const;
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);