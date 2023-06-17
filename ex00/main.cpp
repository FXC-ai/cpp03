#include "ClapTrap.hpp"

int main()
{

	ClapTrap CP_super("FX", 150,20,12);
	CP_super.attack("Voldemort");

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

	std::cout << "\n";

	ClapTrap clap;
	ClapTrap clapclap("Bob");

	clap.attack("Bob");
	clapclap.attack("noName");

	clapclap.beRepaired(199);
	clapclap.takeDamage(1);
	clapclap.takeDamage(300);
	clapclap.beRepaired(199);

	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");
	clap.attack("Bob");

	return 0;
}