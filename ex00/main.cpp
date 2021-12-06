#include "ClapTrap.hpp"

int main(void) {
	ClapTrap atlas("Atlas");
	ClapTrap notAtlas(atlas);
	ClapTrap notAtlasAgain = atlas;

	atlas.attack("Jimmy");
	notAtlas.attack("Jimmy");
	notAtlasAgain.attack("Jimmy");
	return 0;
}
