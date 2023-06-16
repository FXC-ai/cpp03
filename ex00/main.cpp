#include "ClapTrap.hpp"

int main()
{

	ClapTrap Roger;
	ClapTrap Stan("Stan");

	std::cout << Stan.getName() << std::endl;

	Roger = Stan;

	std::cout << Roger.getName() << std::endl;

	ClapTrap Alberto(Roger);

	std::cout << Alberto.getName() << std::endl;

	Roger.attack("Alberto");

	return 0;
}