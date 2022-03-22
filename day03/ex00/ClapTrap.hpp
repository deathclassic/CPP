#pragma once
#include <iostream>
#include <string>

class ClapTrap {
		std::string _name;
		int			_hp;
		int			_energy;
		int			_dmg;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &);
		ClapTrap const &operator=(ClapTrap const &);

		void	attack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);

		std::string	get_name(void);
		void		set_name(std::string);

		~ClapTrap();
};