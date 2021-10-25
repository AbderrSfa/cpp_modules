/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:29 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:30 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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