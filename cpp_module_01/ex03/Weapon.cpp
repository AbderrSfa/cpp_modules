/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:44 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 09:48:17 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string aType) : _type(aType) {
	std::cout << "Weapon constructor." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor." << std::endl;
}

std::string const &	Weapon::getType( void ) const {
	return (this->_type);
}

void	Weapon::setType(std::string aType) {
	this->_type = aType;
}