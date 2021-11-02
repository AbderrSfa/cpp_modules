/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:55:34 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 12:03:14 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string aName) : ClapTrap(aName + "_clap_name"), ScavTrap(aName), FragTrap(aName), _Name(aName) {
	std::cout << "DiamondTrap " << this->_Name << " spawned." << std::endl;
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap("default"), ScavTrap("default"), FragTrap("default") {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* DiamondTrap &  DiamondTrap::operator=(DiamondTrap const & rhs) {
	*this = rhs;
	return *this;
} */

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_Name << " died." << std::endl;    
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap name: " << this->_Name << " -- ClapTrap name: " << this->getName() << std::endl;    
}