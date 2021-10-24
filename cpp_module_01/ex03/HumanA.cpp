#include "HumanA.hpp"

void	HumanA::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon.getType() << std::endl;
}