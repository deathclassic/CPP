#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void) {
	// const Animal* meta = new Animal(); 
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// j->makeSound(); 
    // meta->makeSound();
	// delete j;
	// delete i;
	// delete meta;

	const WrongAnimal* meta = new WrongAnimal(); 
	const WrongAnimal* j = new WrongDog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); 
    meta->makeSound();
	delete j;
	delete i;
	delete meta;
	return 0;	
}