#include "ClapTrap.hpp"

//constructors

ClapTrap::ClapTrap(void) : _name("UNKNOWN"), _hp(10), 
	_energy(10), _dmg(0) {
		std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), 
	_energy(10), _dmg(0) {
		std::cout << "Parameterized constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &ct) {
	*this = ct;
	std::cout << "Copy constructor called\n";
}

ClapTrap const &ClapTrap::operator=(ClapTrap const &ct) {
	this->_name = ct._name;
	this->_hp = ct._hp;
	this->_energy = ct._energy;
	this->_dmg = ct._dmg;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

//class methods

void	ClapTrap::attack(std::string const &target) {
	if (!_energy) {
		std::cout << "Not enough energy for attack\n";
		return ;
	}
	std::cout << _name << ": " << "hp = " << _hp << ", energy = " << _energy << "\n";
	std::cout << "ClapTrap " << _name << " attacks " << target <<
	", causing " << _dmg << " points of damage.\n";
	_energy--;
	std::cout << _name << ": " << "hp = " << _hp << ", energy = " << _energy << "\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount \
		 << " of damage.\n";
	_hp -= amount;
	std::cout << _name << ": " << "hp = " << _hp << ", energy = " << _energy << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_energy) {
		std::cout << "Not enough energy for repairing\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " restored " << amount \
		 << " health points.\n";
	_hp += amount;
	_energy--;
	std::cout << _name << ": " << "hp = " << _hp << ", energy = " << _energy << "\n";
}

//get_set

void		ClapTrap::set_name(std::string name) {
	_name = name;
	std::cout << "set_name func. called, naming ClapTrap as " <<
	name << "\n";
}

std::string	ClapTrap::get_name(void){
	return (_name);
}

//destructor

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called\n";
}