/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:44 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:05:45 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType( void ) const {
	return (this->_type);
}

void	Weapon::setType(std::string aType) {
	this->_type = aType;
}