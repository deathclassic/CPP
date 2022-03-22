#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <list>

class ElementNotFound : public std::exception {
	virtual const char *what() const throw() {
		return ("Element not found");
	}
};

template <typename T>
typename T::const_iterator easyfind(T &cont, int n) {
	typename T::const_iterator it;
	it = find(cont.begin(), cont.end(), n);
	if (it != cont.end())
		return (it);
	throw (ElementNotFound());
}