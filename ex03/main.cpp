#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	std::cout << "---- Initialize ClapTraps ----" << std::endl;
	ClapTrap chomper;
	ClapTrap atlas("Atlas");
	ClapTrap notAtlas(atlas);
	ClapTrap notAtlasAgain = atlas;
	ClapTrap weathley("Weathley");
	ClapTrap spaaaaaace("Spaaaaaace");

	std::cout << std::endl << "---- Initialize ScavTraps ----" << std::endl;
	ScavTrap skandinav;
	ScavTrap rhino("Rhino");
	ScavTrap notRhino(rhino);
	ScavTrap notRhinoAgain = rhino;
	ScavTrap glados("GLADoS");
	ScavTrap chell("Chell");

	std::cout << std::endl << "---- Initialize FragTraps ----" << std::endl;
	FragTrap oops;
	FragTrap jinx("Jinx");
	FragTrap notJinx(jinx);
	FragTrap notJinxAgain = jinx;
	FragTrap spy("Spy");
	FragTrap heavy("Heavy");

	std::cout << std::endl << "---- Initialize DiamondTraps ----" << std::endl;
	DiamondTrap saphire;
	DiamondTrap ruby("ruby");
	DiamondTrap notRuby(ruby);
	DiamondTrap notRubyAgain = ruby;
	DiamondTrap rock("Rock");
	DiamondTrap glass("Glass");

	std::cout << std::endl << "---- Call attack() on ClapTraps ----" << std::endl;;
	atlas.attack("Jimmy");
	weathley.attack("Jimmy");
	spaaaaaace.attack("Jimmy");

	std::cout << std::endl << "---- Call attack() on ScavTraps ----" << std::endl;
	rhino.attack("Karl");
	glados.attack("Karl");
	chell.attack("Karl");

	std::cout << std::endl << "---- Call attack() on FragTraps ----" << std::endl;
	jinx.attack("Chandler");
	spy.attack("Chandler");
	heavy.attack("Chandler");

	std::cout << std::endl << "---- Call takeDamage() on ClapTraps ----" << std::endl;;
	atlas.takeDamage(25);
	weathley.takeDamage(25);
	spaaaaaace.takeDamage(25);

	std::cout << std::endl << "---- Call takeDamage() on ScavTraps ----" << std::endl;
	rhino.takeDamage(25);
	glados.takeDamage(25);
	chell.takeDamage(25);

	std::cout << std::endl << "---- Call takeDamage() on FragTraps ----" << std::endl;
	jinx.takeDamage(25);
	spy.takeDamage(25);
	heavy.takeDamage(25);

	std::cout << std::endl << "---- Call beRepaired() on ClapTraps ----" << std::endl;;
	atlas.beRepaired(25);
	weathley.beRepaired(25);
	spaaaaaace.beRepaired(25);

	std::cout << std::endl << "---- Call beRepaired() on ScavTraps ----" << std::endl;
	rhino.beRepaired(25);
	glados.beRepaired(25);
	chell.beRepaired(25);

	std::cout << std::endl << "---- Call beRepaired() on FragTraps ----" << std::endl;
	jinx.beRepaired(25);
	spy.beRepaired(25);
	heavy.beRepaired(25);


	std::cout << std::endl << "---- Call guardGate() on ScavTraps ----" << std::endl;
	rhino.guardGate();
	glados.guardGate();
	chell.guardGate();

	std::cout << std::endl << "---- Call highFivesGuys() on FragTraps ----" << std::endl;
	jinx.highFivesGuys();
	spy.highFivesGuys();
	heavy.highFivesGuys();

	std::cout << std::endl << "---- Call whoAmI() on DiamondTraps ----" << std::endl;
	saphire.whoAmI();
	ruby.whoAmI();
	notRuby.whoAmI();
	notRubyAgain.whoAmI();
	rock.whoAmI();
	glass.whoAmI();
	
	std::cout << std::endl << "---- Destructors and all ----" << std::endl;
	
	return 0;
}
