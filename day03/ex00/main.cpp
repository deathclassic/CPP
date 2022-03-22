#include "ClapTrap.hpp"

int main(void) {
	ClapTrap no_name;
	no_name.set_name("Josh");
	ClapTrap arthas("Arthas");
	ClapTrap Bobby = ClapTrap("Robbert");
	ClapTrap Louis("Louis");
	ClapTrap Louis_copy(Louis);
	std::cout << "\n";

	no_name.attack("target dummy");
	no_name.takeDamage(5);
	no_name.beRepaired(7);
	std::cout << "\n";

	arthas.attack("murlock");
	arthas.takeDamage(4);
	arthas.beRepaired(3);
	std::cout << "\n";

	Bobby.attack("boar");
	Bobby.takeDamage(8);
	Bobby.beRepaired(5);
	std::cout << "\n";

	Louis_copy.attack("bandit");
	Louis_copy.takeDamage(9);
	Louis_copy.beRepaired(9);
	std::cout << "\n";

	// for (int i = 0; i < 5; i++) {
	// 	Louis_copy.attack("bandit");
	// 	Louis_copy.takeDamage(9);
	// 	Louis_copy.beRepaired(9);
	// 	std::cout << "\n";
	// }
	return (0);
}