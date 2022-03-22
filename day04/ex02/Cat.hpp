#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat(std::string);
		Cat(Cat const &);
		Cat const &operator=(Cat const &);
		~Cat();

		virtual void	makeSound(void) const;
};