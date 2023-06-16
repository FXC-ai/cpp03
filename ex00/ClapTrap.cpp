#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor called. Name = " << this->_name <<std::endl;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

int	ClapTrap::getHitPoints() const
{
	return this->_HitPoints;
}

int	ClapTrap::getEnergyPoints() const
{
	return this->_EnergyPoints;
}

int	ClapTrap::getAttackDamage() const
{
	return this->_AttackDamage;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs.getName();
	this->_HitPoints = rhs.getHitPoints();
	this->_EnergyPoints = rhs.getEnergyPoints();
	this->_AttackDamage = rhs.getAttackDamage();
	return *this;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	*this = src;
	//return this;
}

void ClapTrap::attack(const std::string& target)
{
	if ()
	{
		
	}


	if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" <<std::endl;
	}
	else
	{
		std::cout << "Impossible to "
	}
}

// void ClapTrap::takeDamage

