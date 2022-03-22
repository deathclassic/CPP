#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meow-Meow\n";
}