#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string);

		void	attack(std::string const &);
		void	guardGate(void);

		~ScavTrap();
};