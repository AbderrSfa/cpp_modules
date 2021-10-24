#include "Weapon.hpp"

std::string	Weapon::getType( void ) const {
	return (this->_type);
}

void	Weapon::setType(std::string aType) {
	this->_type = aType;
}