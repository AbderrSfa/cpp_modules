/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/11 17:33:09 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string aName) {
	this->setName(aName);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & rhs) {
	if (this == &rhs)
		return *this;
	this->setName(rhs.getName());
	this->setAttackDamage(rhs.getAttackDamage());
	this->setHitpoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->getName() << " is in gate keeper mode." << std::endl;    
}