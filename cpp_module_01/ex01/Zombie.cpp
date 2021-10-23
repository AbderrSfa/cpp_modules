#include "Zombie.hpp"

Zombie::Zombie( void ) {
}

Zombie::~Zombie( void ) {
	std::cout << this->_Name << " died." << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_Name = name;
}