#include "DiamondTrap.hpp"

// ---- Default constructors and operators overloading
DiamondTrap::DiamondTrap() : ClapTrap("Saphire_clap_name"), ScavTrap(), FragTrap(), name("Saphire") {
	std::cout << "DiamondTrap [" << name << "] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() { 
	this->name = name;
	std::cout << "DiamondTrap [" << name << "] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "DiamondTrap [" << name << "] Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap [" << name << "] Destructor called" << std::endl; }

// ---- Public methods
void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << name << std::endl << "ClapTrap name: " << ClapTrap::name << std::endl;
}
