#include "easyfind.hpp"

int main(void){
	srand(0);
	int size = 5;

	std::vector<int> vect;
	for (int i = 0; i < size; i++)
		vect.push_back(i);
	try{
		std::cout << *easyfind(vect, 4) << "\n";
		std::cout << *easyfind(vect, 5) << "\n";
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << '\n';
	}
	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(10 - i + 5);
	try{
		std::cout << *easyfind(lst, 9) << "\n";
		std::cout << *easyfind(lst, 1) << "\n";

	}
	catch (std::exception &exc) {
		std::cout << exc.what() << '\n';
	}
	return (0);
}