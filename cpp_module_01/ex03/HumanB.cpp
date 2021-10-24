#include "HumanB.hpp"

void	HumanB::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon aWeapon) {
	this->_Weapon = &aWeapon;
}