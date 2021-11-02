/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:31:33 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string aName) : ClapTrap(aName) {
	std::cout << "ScavTrap " << this->getName() << " spawned." << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap("default") {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* ScavTrap &  ScavTrap::operator=(ScavTrap const & rhs) {
	*this = rhs;
	return *this;
} */

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " died." << std::endl;    
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->getName() << " is in gate keeper mode." << std::endl;    
}