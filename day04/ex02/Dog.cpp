#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	_dogBrain = new Brain("Bones");
	std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string type) : Animal("Dog") {
	_dogBrain = new Brain(type);
	std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &copy) {
	_dogBrain = NULL;
	*this = copy;
	std::cout << "Dog copy constructor called\n";
}

Dog const& Dog::operator=(Dog const &obj) {
	if (_dogBrain)
		delete _dogBrain;
	_dogBrain = new Brain;
	this->_type = obj._type;
	*(this->_dogBrain) = *(obj._dogBrain);
	std::cout << "Dog copy assignment operator called\n";
	return (*this);
}

Dog::~Dog() {
	delete _dogBrain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const {
	std::cout << "Woof-Woof\n";
}