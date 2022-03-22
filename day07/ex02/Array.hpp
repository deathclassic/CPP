#pragma once
#include <iostream>

template <class T>
class Array {
		T		*_data;
		u_int	_size;
	public:
		Array() : _data() {}

		Array(u_int size) : _size(size) {
			_data = new T[_size];
			for (u_int i = 0; i < _size; i++)
				_data[i] = 0;
		}

		Array(const Array &copy) {
			_size = copy._size;
			_data = new T[_size];
			for (u_int i = 0; i < _size; i++)
				_data[i] = copy._data[i];
		}

		Array	&operator=(const Array &copy) {
			_size = copy._size;
			_data = new T[_size];
			for (u_int i = 0; i < _size; i++)
				_data[i] = copy._data[i];
			return (*this);
		}

		T	&operator[](u_int i) {
			if (i < 0 || i >= _size)
				throw std::out_of_range("index is out of range");
			return (_data[i]);
		}

		~Array() { delete [] _data; }
};