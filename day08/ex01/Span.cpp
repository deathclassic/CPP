#include "Span.hpp"

Span::Span(u_int i) : _size(i) {}

Span::Span(Span const &copy) : _size(copy._size) {}

Span const& Span::operator=(Span const &obj) {
	if (this != &obj)
		_size = obj._size;
	return (*this);
}

Span::~Span() {}

//methods

u_int	Span::getSize() {
	return (_size);
}

void	Span::addNumber(int i) {
	if (_size <= _vect.size() || i < 0)
		throw (Span::SpanException("Array is full"));
	_vect.push_back(i);
}

u_int	Span::shortestSpan() {
	int	ret = INT_MAX;
	if (_vect.size() < 2)
		throw (Span::SpanException("Array must have atleast 2 elements"));
	std::sort(_vect.begin(), _vect.end());
	std::vector<int>::iterator current = _vect.begin();
	std::vector<int>::iterator prev = current;
	current++;
	while (current != _vect.end()) {
		if (ret > *current - *prev)
			ret = *current - *prev;
		prev = current;
		current++;
	}
	return (ret);
}

u_int	Span::longestSpan() {
	if (_vect.size() < 2)
		throw (Span::SpanException("Array must have atleast 2 elements"));
	std::vector<int>::iterator min = std::min_element(_vect.begin(), _vect.end());
	std::vector<int>::iterator max = std::max_element(_vect.begin(), _vect.end());
	return (*max - *min);
}

//exception

Span::SpanException::SpanException(std::string err) :
_err(err) {}

Span::SpanException::~SpanException(void) throw() {}

const char *Span::SpanException::what(void) const throw() {
	return (_err.c_str());
}
