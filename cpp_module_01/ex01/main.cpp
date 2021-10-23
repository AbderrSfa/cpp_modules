#include "Zombie.hpp"

int		main() {
	int		N = 3;
	int		i = 0;
	Zombie*	Zombies = zombieHorde(N, "BrainEater");

	while (i < N) {
		Zombies[i].announce();
		i++;
	}
	delete [] Zombies;
}