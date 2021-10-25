/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:19 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:20 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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