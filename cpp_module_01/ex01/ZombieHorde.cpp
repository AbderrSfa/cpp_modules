#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	int		i;
	Zombie*	Zombies = new Zombie[N];

	i = 0;
	while (i < N) {
		Zombies[i].setName(name);
		i++;
	}
	return (Zombies);
}