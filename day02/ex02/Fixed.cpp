#include "Fixed.hpp"

//constructor

Fixed::Fixed(void) : _fixed_point(0) {}

Fixed::Fixed(Fixed const &tmp) {
	this->_fixed_point = tmp._fixed_point;
}

Fixed::Fixed(const int &nbr) {
	_fixed_point = nbr << _bits;
}

Fixed::Fixed(const float &nbr) {
	_fixed_point = roundf(nbr * (1 << _bits));
}

Fixed const &Fixed::operator=(const Fixed &fx) {
	_fixed_point = fx._fixed_point;
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
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
}

//arithmetic operators

Fixed const Fixed::operator+(Fixed const &fx) {
	Fixed res;

	res._fixed_point = this->_fixed_point + fx._fixed_point;
	return (res);
}

Fixed const Fixed::operator-(Fixed const &fx) {
	Fixed res;

	res._fixed_point = this->_fixed_point - fx._fixed_point;
	return (res);
}

Fixed const Fixed::operator*(Fixed const &fx) {
	Fixed res;

	res._fixed_point = (this->_fixed_point * fx._fixed_point) / (1 << this->_bits);
	return (res);
}

Fixed const Fixed::operator/(Fixed const &fx) {
	Fixed res;

	res._fixed_point = (this->_fixed_point / fx._fixed_point) * (1 << this->_bits);
	return (res);
}

//bool operators

bool Fixed::operator>(Fixed const &fx) const {
	return (_fixed_point > fx._fixed_point);
}

bool Fixed::operator<(Fixed const &fx) const {
	return (_fixed_point < fx._fixed_point);
}

bool Fixed::operator>=(Fixed const &fx) const {
	return (_fixed_point >= fx._fixed_point);
}

bool Fixed::operator<=(Fixed const &fx) const {
	return (_fixed_point <= fx._fixed_point);
}

bool Fixed::operator==(Fixed const &fx) const {
	return (_fixed_point == fx._fixed_point);
}

bool Fixed::operator!=(Fixed const &fx) const {
	return (_fixed_point != fx._fixed_point);
}

//increment/decrement

Fixed const Fixed::operator++(void) {
	++_fixed_point;
	return (*this);
}

Fixed const Fixed::operator--(void) {
	--_fixed_point;
	return (*this);
}

Fixed const Fixed::operator++(int) {
	Fixed res;

	res._fixed_point = _fixed_point;
	_fixed_point++;
	return (*this);
}

Fixed const Fixed::operator--(int) {
	Fixed res;

	res._fixed_point = _fixed_point;
	_fixed_point--;
	return (*this);
}

//min_max

Fixed const &Fixed::max(Fixed const &fx1, Fixed const &fx2) {
	if (fx1 > fx2)
		return (fx1);
	return (fx2);	
}

Fixed const &Fixed::min(Fixed const &fx1, Fixed const &fx2) {
	if (fx1 < fx2)
		return (fx1);
	return (fx2);	
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2) {
	if (fx1 > fx2)
		return (fx1);
	return (fx2);	
}

Fixed &Fixed::min(Fixed &fx1, Fixed &fx2) {
	if (fx1 < fx2)
		return (fx1);
	return (fx2);	
}

//destructor

Fixed::~Fixed() {}
