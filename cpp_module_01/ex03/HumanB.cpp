#include "HumanB.hpp"

HumanB::HumanB(std::string aName) {
	this->_Name = aName;
	this->_Weapon = NULL;
}

void	HumanB::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon aWeapon) {
	this->_Weapon = &aWeapon;
}