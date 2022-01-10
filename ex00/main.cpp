#include "ClapTrap.hpp"

int main(void) {
	std::cout << "--- Initialize ClapTraps ----" << std::endl;
	ClapTrap atlas("Atlas");
	ClapTrap notAtlas(atlas);
	ClapTrap notAtlasAgain = atlas;

	std::cout << std::endl << "--- Call attack() on ClapTraps ----" << std::endl;
	atlas.attack("Jimmy");
	notAtlas.attack("Jimmy");
	notAtlasAgain.attack("Jimmy");

	std::cout << std::endl << "--- Call takeDamage() on ClapTraps ----" << std::endl;
	atlas.takeDamage(42);
	notAtlas.takeDamage(42);
	notAtlasAgain.takeDamage(42);

	std::cout << std::endl << "--- Call beRepaired() on ClapTraps ----" << std::endl;
	atlas.beRepaired(42);
	notAtlas.beRepaired(42);
	notAtlasAgain.beRepaired(42);

	std::cout << std::endl << "--- Destroy ClapTraps ----" << std::endl;
	return 0;
}
