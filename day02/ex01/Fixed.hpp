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
		Fixed(const int &nbr);
		Fixed(const float &nbr);

		Fixed	const &operator=(Fixed const &fx);

		int toInt(void) const;
		float toFloat(void) const;
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);