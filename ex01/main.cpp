#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	ScavTrap	SC_Kilian("Kilian");
	std::cout << "\n";

	ScavTrap	SC_unamed;	
	std::cout << "\n";

	ScavTrap	SC_Francois("Francois");
	std::cout << "\n";

	std::cout << "SC_unamed.getName = " << SC_unamed.getName() << std::endl;
	SC_unamed = SC_Francois;
	std::cout << "SC_unamed.getName = " << SC_unamed.getName() << std::endl;
	std::cout << "\n";



	std::cout << "\033[1;31mKillian va tuer Francois :\033[0m" << std::endl;
	for (int i = 0; i < 6; ++i)
	{
		SC_Kilian.attack(SC_Francois.getName());
		SC_Francois.takeDamage(SC_Kilian.getAttackDamage());
	}
	std::cout << "\n";
	
	SC_Francois.attack(SC_Kilian.getName());
	SC_Francois.beRepaired(60);
	std::cout << "\n";

	std::cout << "\033[1;31mFrancois va tuer Kilian :\033[0m" << std::endl;
	for (int i = 0; i < 6; ++i)
	{
		SC_Francois.attack(SC_Kilian.getName());
		SC_Kilian.takeDamage(SC_Francois.getAttackDamage());
	}
	std::cout << "\n";

	return 0;
}