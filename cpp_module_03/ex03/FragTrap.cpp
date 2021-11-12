/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:11:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:46:14 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string aName) {
	this->_Name = aName;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap &  FragTrap::operator=(FragTrap const & rhs) {
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_AttackDamage = rhs._AttackDamage;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(std::string const & target) const {
	std::cout << "FragTrap " << this->_Name << " executes Frag attack on " << target << ", worth " << this->_AttackDamage << " damage points!" << std::endl;
}

void	FragTrap::highFivesGuys( void ) const {
	std::cout << "FragTrap " << this->_Name << " wants a highfive from the bois." << std::endl;
}