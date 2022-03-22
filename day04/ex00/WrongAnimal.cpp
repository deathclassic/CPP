#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Some animal") {
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	*this = copy;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal const& WrongAnimal::operator=(WrongAnimal const &obj) {
	this->_type = obj._type;
	std::cout << "WrongAnimal copy assignment operator called\n";
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Bruh\n";
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}