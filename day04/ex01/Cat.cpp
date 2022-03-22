#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	_catBrain = new Brain("Fish");
	std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string type) : Animal("Cat") {
	_catBrain = new Brain(type);
	std::cout << "Cat constructor called\n";
}

Cat::Cat(Cat const &copy) {
	_catBrain = NULL;
	*this = copy;
	std::cout << "Cat copy constructor called\n";
}

Cat const& Cat::operator=(Cat const &obj) {
	if (_catBrain)
		delete _catBrain;
	_catBrain = new Brain;
	this->_type = obj._type;
	*(this->_catBrain) = *(obj._catBrain);
	std::cout << "Cat copy assignment operator called\n";
	return (*this);
}

Cat::~Cat() {
	delete _catBrain;
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound(void) const {
	std::cout << "Meow-Meow\n";
}