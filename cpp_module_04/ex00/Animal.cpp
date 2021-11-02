/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:13:11 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 14:47:00 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal is born." << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal is born (copy constructor)" << std::endl;
	*this = src;
}

/* Animal &  Animal::operator=(Animal const & rhs) {
	*this = rhs;
	return *this;
} */

Animal::~Animal() {
	std::cout << "Animal died." << std::endl;	
}

std::string	Animal::getType( void ) const { return (this->type); }

void		Animal::setType( std::string aType ) { this->type = aType; }
