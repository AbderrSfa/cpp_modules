#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main() {
	Weapon	club = Weapon("crude spiked club");

	HumanB	jim("Jim");
	jim.setWeapon(club);
	jim.attack();
}