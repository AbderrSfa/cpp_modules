/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:05 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 10:02:16 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string aName, Weapon& aWeapon) : _Name(aName), _Weapon(aWeapon) {
	std::cout << "HumanA constructor." << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor." << std::endl;	
}

std::string	HumanA::getName( void ) const { return (this->_Name); }

void		HumanA::setName(std::string aName) { this->_Name = aName; }

void	HumanA::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon.getType() << std::endl;
}