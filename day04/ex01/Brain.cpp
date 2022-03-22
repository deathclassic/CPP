#include "Brain.hpp"

Brain::Brain(void) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "No Idea\n";
	std::cout << "Brain constructor called\n";
}

Brain::Brain(std::string type) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = type;	
	std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain const &copy) {
	*this = copy;
	std::cout << "Brain copy constructor called\n";
}

Brain const& Brain::operator=(Brain const &obj) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];	
	std::cout << "Brain copy assignment operator called\n";
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}