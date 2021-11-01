/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:17:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/01 10:30:00 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string aName) : _Name(aName), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap " << this->_Name << " spawned." << std::endl;
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
	std::cout << "ClapTrap " << this->_Name << " died." << std::endl;    
}

void    ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_Name << " took " << amount << " points of damage." << std::endl;
	this->_Hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_Name << " repaired life points by " << amount << "." << std::endl;
	this->_EnergyPoints += amount;
}