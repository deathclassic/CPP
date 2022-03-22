#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_dogBrain;
	public:
		Dog();
		Dog(std::string);
		Dog(Dog const &);
		Dog const &operator=(Dog const &);
		~Dog();

		virtual void	makeSound(void) const;
};