#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap arthas("Arthas");
	DiamondTrap Bobby = DiamondTrap("Robbert");
	DiamondTrap Louis(DiamondTrap("Louis"));
	std::cout << "\n";

	arthas.attack("murlock");
	arthas.takeDamage(4);
	arthas.beRepaired(3);
	arthas.sayName();
	std::cout << "\n";

	Bobby.attack("boar");
	Bobby.takeDamage(8);
	Bobby.beRepaired(5);
	std::cout << "\n";

	Louis.attack("bandit");
	Louis.takeDamage(9);
	Louis.beRepaired(9);
	Louis.highFiveGuys();
	Louis.guardGate();
	Louis.whoAmI();
	std::cout << "\n";

	return (0);
}