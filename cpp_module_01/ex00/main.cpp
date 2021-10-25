/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:45 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:46 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main() {
	Zombie	StackZombie("StackZombie");
	Zombie*	HeapZombie = newZombie("HeapZombie");

	StackZombie.announce();
	HeapZombie->announce();
	randomChump("Chump");
	delete HeapZombie;
}