#include "FragTrap.hpp"

#define DEFAULT_HIT_POINTS 100
#define DEFAULT_ENERGY_POINTS 100
#define DEFAULT_ATTACK_DAMAGE 30

// ---- Default constructors and operators overloading
FragTrap::FragTrap() : ClapTrap("Oopsy") {
	hitPoints = DEFAULT_HIT_POINTS;
	energyPoints = DEFAULT_ENERGY_POINTS;
	attackDamage = DEFAULT_ATTACK_DAMAGE;

	std::cout << "FragTrap [" << name << "] Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) { 
	hitPoints = DEFAULT_HIT_POINTS;
	energyPoints = DEFAULT_ENERGY_POINTS;
	attackDamage = DEFAULT_ATTACK_DAMAGE;

	std::cout << "FragTrap [" << name << "] Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "FragTrap [" << name << "] Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return *this;
}

FragTrap::~FragTrap() { std::cout << "FragTrap [" << name << "] Destructor called" << std::endl; }

// ---- Public methods
void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " (Raising its hand): Hey guys, high five !" << std::endl;
}
