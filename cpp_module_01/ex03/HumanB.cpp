/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:00 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:01 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string aName) {
	this->_Name = aName;
	this->_Weapon = NULL;
}

void	HumanB::attack( void ) const {
	std::cout << this->_Name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon aWeapon) {
	this->_Weapon = &aWeapon;
}