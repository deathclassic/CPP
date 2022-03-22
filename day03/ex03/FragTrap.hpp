#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string);

		void	highFiveGuys(void);

		~FragTrap();
};