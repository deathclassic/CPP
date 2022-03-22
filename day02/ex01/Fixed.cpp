#include "Fixed.hpp"

//constructor

Fixed::Fixed(void) : _fixed_point(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &tmp) {
	this->_fixed_point = tmp._fixed_point;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int &nbr) {
	std::cout << "Int constructor called\n";
	_fixed_point = nbr << _bits;
}

Fixed::Fixed(const float &nbr) {
	std::cout << "Float constructor called\n";
	_fixed_point = roundf(nbr * (1 << _bits));
}

Fixed const &Fixed::operator=(const Fixed &fx) {
	_fixed_point = fx._fixed_point;
	std::cout << "Copy assigment operator called\n";
	return (*this);
}

//conversion

int	Fixed::toInt(void) const {
	return (_fixed_point >> _bits);
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_fixed_point / float(1 << _bits)));
}

std::ostream &operator<<(std::ostream &out, Fixed const &f) {
	out << f.toFloat();
	return (out);
}

//get_set

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
	std::cout << "setRawBits member function called\n";
}

//destructor

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}
