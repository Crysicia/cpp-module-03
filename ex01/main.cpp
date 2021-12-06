#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap atlas("Atlas");
	ClapTrap notAtlas(atlas);
	ClapTrap notAtlasAgain = atlas;

	ScavTrap rhino("Rhino");

	atlas.attack("Jimmy");
	notAtlas.attack("Jimmy");
	notAtlasAgain.attack("Jimmy");
	return 0;
}
