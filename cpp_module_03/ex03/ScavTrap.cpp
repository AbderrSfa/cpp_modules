/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 10:25:53 by asfaihi          ###   ########.fr       */
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

void	ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->getName() << " is in gate keeper mode." << std::endl;    
}