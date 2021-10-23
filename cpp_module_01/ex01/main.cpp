#include "Zombie.hpp"

int		main() {
	Zombie	StackZombie("StackZombie");
	Zombie*	HeapZombie = newZombie("HeapZombie");

	StackZombie.announce();
	HeapZombie->announce();
	randomChump("Chump");
	delete HeapZombie;
}