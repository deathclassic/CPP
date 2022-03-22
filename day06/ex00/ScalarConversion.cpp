#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(char *input) : _input(input) {
	getChar(_input);
	getInt(_input);
	getFloat(_input);
	getDouble(_input);
}

ScalarConversion::ScalarConversion(ScalarConversion const &copy) :
_input(copy._input) {
	getChar(_input);
	getInt(_input);
	getFloat(_input);
	getDouble(_input);
}

ScalarConversion const& ScalarConversion::operator=(ScalarConversion const &obj) {
	_input = obj._input;
	getChar(_input);
	getInt(_input);
	getFloat(_input);
	getDouble(_input);
	return (*this);
}

ScalarConversion::~ScalarConversion() {}

//methods
void	ScalarConversion::getChar(char *input) {
	try {
		_toChar = static_cast<char>(std::stoi(input));
		if (!isprint(_toChar))
			std::cout << "char:\t" << "non displayable\n";
		else
			std::cout << "char:\t" << _toChar << '\n';
	}
	catch (std::exception &exception) {
		std::cout << "char:\timpossible\n";
	}
}

void	ScalarConversion::getInt(char *input) {
	try {
		_toInt = static_cast<int>(std::stoi(input));
		std::cout << "int:\t" << _toInt << '\n';
	}
	catch (std::exception &exception) {
		std::cout << "int:\timpossible\n";
	}
}

void	ScalarConversion::getFloat(char *input) {
	try {
		_toFloat = static_cast<float>(std::stof(input));
		std::cout << "float:\t";
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << _toFloat << "f" << '\n';
	}
	catch (std::exception &exception) {
		std::cout << "float:\timpossible\n";
	}
}

void	ScalarConversion::getDouble(char *input){
	try {
		_toDouble = static_cast<double>(std::stod(input));
		std::cout << "double:\t" << _toDouble << '\n';
	}
	catch (std::exception &exception) {
		std::cout << "double:\timpossible\n";
	}
}