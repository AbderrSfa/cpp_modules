/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:38:50 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 10:18:50 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal is born." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "WrongAnimal is born (copy constructor)" << std::endl;
	*this = src;
}

WrongAnimal &  WrongAnimal::operator=(WrongAnimal const & rhs) {
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal died." << std::endl;	
}

std::string	WrongAnimal::getType( void ) const { return (this->type); }

void		WrongAnimal::setType( std::string aType ) { this->type = aType; }

void		WrongAnimal::makeSound( void ) const {
	std::cout << "*WrongAnimal noise*" << std::endl;
}