#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("UNKNOWN DIAMONDTRAP") {
	std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
ScavTrap(name), FragTrap(name), _name(name) {
	std::cout << "DiamondTrap constructor called\n";
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Who am I?...\n";
}

void	DiamondTrap::sayName(void) {
	std::cout << "My name is: " << _name << "\n";
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called\n";
}