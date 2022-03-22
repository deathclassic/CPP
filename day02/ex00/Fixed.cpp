#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &tmp) {
	this->_fixed_point = tmp._fixed_point;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &fx) {
	_fixed_point = fx._fixed_point;
	std::cout << "Copy assigment operator called\n";
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
	std::cout << "setRawBits member function called\n";
}