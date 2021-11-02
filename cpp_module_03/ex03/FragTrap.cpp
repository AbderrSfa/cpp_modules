/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:11:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 10:49:29 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string aName) : ClapTrap(aName) {
	std::cout << "FragTrap " << this->getName() << " spawned." << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap("default") {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* FragTrap &  FragTrap::operator=(FragTrap const & rhs) {
	*this = rhs;
	return *this;
} */

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " died." << std::endl;    
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->getName() << " wants a highfive from the bois." << std::endl;
}
