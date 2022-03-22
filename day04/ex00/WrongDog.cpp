#include "WrongDog.hpp"

WrongDog::WrongDog(void) : WrongAnimal("WrongDog") {
	std::cout << "WrongDog constructor called\n";
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called\n";
}

void	WrongDog::makeSound(void) const {
	std::cout << "Woof-Woof\n";
}