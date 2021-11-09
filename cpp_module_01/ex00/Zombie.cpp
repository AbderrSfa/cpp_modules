/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:36 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 09:29:15 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Constructor called." << std::endl;
}

Zombie::Zombie(std::string name) : _Name(name) {
	std::cout << "Constructor called." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->_Name << " died." << std::endl;
}

std::string	Zombie::getName( void ) const { return (this->_Name); }

void		Zombie::setName(std::string name) { this->_Name = name; }

void	Zombie::announce( void ) const {
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}