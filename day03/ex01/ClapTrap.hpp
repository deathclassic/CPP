#pragma once
#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string _name;
		int			_hp;
		int			_energy;
		int			_dmg;
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(std::string, int, int, int);
		ClapTrap(ClapTrap const &);
		ClapTrap const &operator=(ClapTrap const &);

		void	attack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);

		std::string	getName(void);
		void		setName(std::string);

		~ClapTrap();
};