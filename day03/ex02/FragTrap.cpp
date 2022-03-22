#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("UNKNOWN", 100, 100, 30) {
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap constructor called\n";
}

void	FragTrap::highFiveGuys(void) {
	std::cout << _name << " gives you a high five! yay\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}