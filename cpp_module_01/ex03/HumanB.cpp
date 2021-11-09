/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:00 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 10:06:52 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string aName) : _Name(aName) {
	std::cout << "HumanB constructor." << std::endl;	
	this->_Weapon = NULL;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor." << std::endl;	
}

std::string	HumanB::getName( void ) const { return (this->_Name); }

void		HumanB::setName(std::string aName) { this->_Name = aName; }

void	HumanB::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &aWeapon) {
	this->_Weapon = &aWeapon;
}