#include "ClapTrap.hpp"

int main()
{

	ClapTrap CP_Roger("Roger");
	ClapTrap CP_Stan("Stan");

	std::cout << "\n";

	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Roger.attack("Stan");
	CP_Stan.takeDamage(CP_Roger.getAttackDamage());

	CP_Stan.takeDamage(11);
	CP_Stan.takeDamage(11);

	CP_Stan.attack("Andy");

	CP_Stan.beRepaired(12);

	for (int i = 0; i < 11; i++)
	{
		CP_Stan.attack("Andy");
	}



	std::cout << "\n";cd .

	return 0;
}