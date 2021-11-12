/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:45:20 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string aName) {
	this->_Name = aName;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & rhs) {
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_AttackDamage = rhs._AttackDamage;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const & target) const {
	std::cout << "ScavTrap " << this->_Name << " performs attack on " << target << ", dealing " << this->_AttackDamage << " damage points!" << std::endl;
}

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->_Name << " is in gate keeper mode." << std::endl;    
}