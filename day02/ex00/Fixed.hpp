#pragma once
#include <iostream>
#include <string>

class Fixed {	
		static const int	_bits = 8;
		int					_fixed_point;
	public:
		Fixed();
		Fixed(Fixed const &);
		Fixed	&operator=(Fixed const &fl);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
};