#include "ClapTrap.hpp"

// ---- Default constructors and operators overloading
ClapTrap::ClapTrap() : name("Chomper"), hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << "ClapTrap [" << name << "] Default constructor called" << std::endl; }
ClapTrap::ClapTrap(std::string input) : name(input), hitPoints(10), energyPoints(10), attackDamage(0) { std::cout << "ClapTrap [" << name << "] Default constructor called" << std::endl; }
ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
	std::cout << "ClapTrap [" << name << "] Copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap() { std::cout << "ClapTrap [" << name << "] Destructor called" << std::endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return *this;
}

// ---- Public methods
void ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " gets repaired " << amount << " hitpoints!" << std::endl;
}
