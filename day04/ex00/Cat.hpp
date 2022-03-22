#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();

		virtual void	makeSound(void) const;
};