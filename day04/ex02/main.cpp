#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	// const Animal some_animal;
	// const Animal* cow = new Animal;
	//-> won't work, because constructor is protected
	
	const Animal* animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else if (i % 2 == 1)
			animals[i] = new Cat;
		std::cout << "\n";
	}
	for (int i = 0; i < 10; i++) {
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}
	for (int i = 0; i < 10; i++) {
		std::cout << "\n";
		delete animals[i];
	}

	return (0);
}