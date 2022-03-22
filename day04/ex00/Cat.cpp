#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound(void) const {
	std::cout << "Meow-Meow\n";
}