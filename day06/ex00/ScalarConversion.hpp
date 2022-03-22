#pragma once
#include <iostream>
#include <string>
#include <exception>

class ScalarConversion {
		char	*_input;
		char	_toChar;
		int		_toInt;
		float	_toFloat;
		double	_toDouble;
	public:
		ScalarConversion(char *str);
		ScalarConversion(ScalarConversion const &);
		ScalarConversion const &operator=(ScalarConversion const &);
		~ScalarConversion();

		void	getChar(char *str);
		void	getInt(char *str);
		void	getFloat(char *str);
		void	getDouble(char *str);
};
