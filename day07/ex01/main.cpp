#include "iter.hpp"

int main(void) {
	int arr[] = {5, 4, 2, 7, 1};
	::print_arr(arr, 5);
	::iter(arr, 5, ::multiply_by_two);
	::print_arr(arr, 5);
	return (0);
}