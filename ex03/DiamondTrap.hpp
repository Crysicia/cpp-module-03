#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	~DiamondTrap();
	DiamondTrap& operator= (const DiamondTrap& rhs);

	void attack(std::string const& target);
	void whoAmI(void);

private:
	std::string name;
};

#endif
