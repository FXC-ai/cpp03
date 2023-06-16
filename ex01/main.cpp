#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	ScavTrap MyFirstScavTrap;
	std::cout << "\n";

	ScavTrap MySecondScavTrap("SP_Serena");
	std::cout << "\n";

	ScavTrap MyThirdScavTrap;

	MyThirdScavTrap = MySecondScavTrap;

	std::cout << MyThirdScavTrap.getName() << std::endl;

	return 0;
}