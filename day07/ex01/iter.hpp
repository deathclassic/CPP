#pragma once

#include <iostream>

template <typename T>
void	iter(T *arr, int size, void (*f)(T &t)) {
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void	multiply_by_two(T &i) {
	i = i * 2;
}

template <typename T>
void	print_arr(T *arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}