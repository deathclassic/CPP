#include "Animal.hpp"

Animal::Animal(void) : _type("Some animal") {
	std::cout << "Animal constructor called\n";
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called\n";
}

Animal::Animal(Animal const &copy) {
	*this = copy;
	std::cout << "Animal copy constructor called\n";
}

Animal const& Animal::operator=(Animal const &obj) {
	this->_type = obj._type;
	std::cout << "Animal copy assignment operator called\n";
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound(void) const{
	std::cout << "Bruh...\n";
}

std::string	Animal::getType(void) const{
	return (_type);
}