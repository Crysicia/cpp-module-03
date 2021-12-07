#include "ScavTrap.hpp"

#define DEFAULT_HIT_POINTS 100
#define DEFAULT_ENERGY_POINTS 50
#define DEFAULT_ATTACK_DAMAGE 20

// ---- Default constructors and operators overloading
ScavTrap::ScavTrap() : ClapTrap("SkandinavTrap") {
	hitPoints = DEFAULT_HIT_POINTS;
	energyPoints = DEFAULT_ENERGY_POINTS;
	attackDamage = DEFAULT_ATTACK_DAMAGE;

	std::cout << "ScavTrap [" << name << "] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { 
	hitPoints = DEFAULT_HIT_POINTS;
	energyPoints = DEFAULT_ENERGY_POINTS;
	attackDamage = DEFAULT_ATTACK_DAMAGE;

	std::cout << "ScavTrap [" << name << "] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	*this = copy;
	std::cout << "ScavTrap [" << name << "] Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap [" << name << "] Destructor called" << std::endl; }

// ---- Public methods
void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " has entered gate keeper mode!" << std::endl;
}
