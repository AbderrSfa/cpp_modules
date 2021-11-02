/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:17:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 10:35:25 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string aName) : _Name(aName), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap " << this->getName() << " spawned." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/* ClapTrap &  ClapTrap::operator=(ClapTrap const & rhs) {
	*this = rhs;
	return *this;
} */

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->getName() << " died." << std::endl;    
}

///	Setters

void	ClapTrap::setName(std::string aName) {
	this->_Name = aName;
}

void	ClapTrap::setHitpoints(int aHitPoints) {
	this->_Hitpoints = aHitPoints;
}

void	ClapTrap::setEnergyPoints(int aEnergyPoints) {
	this->_EnergyPoints = aEnergyPoints;
}

void	ClapTrap::setAttackDamage(int aAttackDamage) {
	this->_AttackDamage = aAttackDamage;
}

/// Getters

std::string	ClapTrap::getName( void ) { return (this->_Name); }
int		ClapTrap::getAttackDamage( void ) { return (this->_AttackDamage); }
int		ClapTrap::getEnergyPoints( void ) { return (this->_EnergyPoints); }
int		ClapTrap::getHitPoints( void ) { return (this->_Hitpoints); }

/// Member functions

void    ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage." << std::endl;
	this->_Hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " repaired life points by " << amount << "." << std::endl;
	this->_EnergyPoints += amount;
}