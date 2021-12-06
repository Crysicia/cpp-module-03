#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	name = "SkandinavTrap";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap [" << name << "] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { std::cout << "ScavTrap [" << name << "] Default constructor called" << std::endl; }
ScavTrap::~ScavTrap() { std::cout << "ScavTrap [" << name << "] Destructor called" << std::endl; }

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " has entered gate keeper mode!" << std::endl;
}
