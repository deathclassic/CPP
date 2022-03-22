#pragma once
#include <iostream>
#include <string>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string);
		Animal(Animal const &);
		Animal const &operator=(Animal const &);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

		virtual ~Animal();
};
