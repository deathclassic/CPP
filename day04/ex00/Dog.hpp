#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();

		virtual void	makeSound(void) const;
};