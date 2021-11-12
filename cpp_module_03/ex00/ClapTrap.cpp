/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:17:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:27:19 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/// Constructors / Destructor
ClapTrap::ClapTrap( void ) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string aName) : _Name(aName), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & rhs) {
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_AttackDamage = rhs._AttackDamage;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

/// Member functions
void    ClapTrap::attack(std::string const & target) const {
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) const {
	std::cout << "ClapTrap " << this->_Name << " took " << amount << " points of damage." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) const {
	std::cout << "ClapTrap " << this->_Name << " repaired life points by " << amount << "." << std::endl;
}