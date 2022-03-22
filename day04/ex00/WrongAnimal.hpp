#pragma once
#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string);
		WrongAnimal(WrongAnimal const &);
		WrongAnimal const &operator=(WrongAnimal const &);
		~WrongAnimal();

		void	makeSound(void) const;
		std::string	getType(void) const;
};