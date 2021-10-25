/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:25 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
}

Zombie::~Zombie( void ) {
	std::cout << this->_Name << " died." << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_Name = name;
}