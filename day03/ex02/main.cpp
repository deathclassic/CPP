#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap no_name;
	no_name.setName("Josh");
	FragTrap arthas("Arthas");
	FragTrap Bobby = FragTrap("Robbert");
	FragTrap Louis(FragTrap("Louis"));
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
	Louis.highFiveGuys();
	std::cout << "\n";

	return (0);
}