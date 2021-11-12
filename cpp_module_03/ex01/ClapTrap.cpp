/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:17:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 10:18:06 by asfaihi          ###   ########.fr       */
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

///	Setters
void	ClapTrap::setName(std::string aName) { this->_Name = aName; }
void	ClapTrap::setHitpoints(int aHitPoints) { this->_HitPoints = aHitPoints; }
void	ClapTrap::setEnergyPoints(int aEnergyPoints) { this->_EnergyPoints = aEnergyPoints; }
void	ClapTrap::setAttackDamage(int aAttackDamage) { this->_AttackDamage = aAttackDamage; }

/// Getters
std::string	ClapTrap::getName( void ) const { return (this->_Name); }
int		ClapTrap::getAttackDamage( void ) const { return (this->_AttackDamage); }
int		ClapTrap::getEnergyPoints( void ) const { return (this->_EnergyPoints); }
int		ClapTrap::getHitPoints( void ) const { return (this->_HitPoints); }

/// Member functions
void    ClapTrap::attack(std::string const & target) const {
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) const {
	std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) const {
	std::cout << "ClapTrap " << this->getName() << " repaired life points by " << amount << "." << std::endl;
}