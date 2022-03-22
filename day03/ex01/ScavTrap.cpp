#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("UNKNOWN", 100, 50, 20) {
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor called\n";
}

void	ScavTrap::attack(std::string const &target) {
	if (!_energy) {
		std::cout << "Not enough energy for attack\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target <<
	" for " << _dmg << " damge... ouch!\n";
	_energy--;
}

void	ScavTrap::guardGate(void) {
	std::cout << "I'm a little robot gate-keeper, beep-boop-bop\n";
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called\n";
}