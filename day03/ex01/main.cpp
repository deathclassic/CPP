#include "ScavTrap.hpp"

int main(void) {
	ScavTrap no_name;
	no_name.setName("Josh");
	ScavTrap arthas("Arthas");
	ScavTrap Bobby = ScavTrap("Robbert");
	ScavTrap Louis(ScavTrap("Louis"));
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

	Louis.attack("bandit");
	Louis.takeDamage(9);
	Louis.beRepaired(9);
	Louis.guardGate();
	std::cout << "\n";

	// for (int i = 0; i < 5; i++) {
	// 	Louis_copy.attack("bandit");
	// 	Louis_copy.takeDamage(9);
	// 	Louis_copy.beRepaired(9);
	// 	std::cout << "\n";
	// }
	return (0);
}