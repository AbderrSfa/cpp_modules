#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _Name(name) {
}

Zombie::~Zombie( void ) {
	std::cout << this->_Name << " died." << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}