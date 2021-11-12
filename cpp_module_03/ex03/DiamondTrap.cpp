/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:55:34 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 10:10:59 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
/* 	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30); */
	this->_Hitpoints = FragTrap::_Hitpoints;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string aName) : ClapTrap(aName + "_clap_name") {
	this->setName(aName);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap &  DiamondTrap::operator=(DiamondTrap const & rhs) {
	if (this == &rhs)
		return *this;
	this->setName(rhs.getName());
	this->setAttackDamage(rhs.getAttackDamage());
	this->setHitpoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called." << std::endl;    
}

void	DiamondTrap::whoAmI( void ) const {
	std::cout << "DiamondTrap name: " << this->_Name << std::endl;
	std::cout << "ClapTrap name: " << this->getName() << std::endl;    
}