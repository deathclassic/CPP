#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string);

		void	whoAmI(void);
		void	sayName(void);

		~DiamondTrap();
};