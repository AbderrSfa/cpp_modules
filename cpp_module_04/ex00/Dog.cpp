/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:33:30 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:00:22 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
    this->setType("Dog");
	std::cout << "Dog is born." << std::endl;
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog is born (copy constructor)" << std::endl;
	*this = src;
}

/* Dog &  Dog::operator=(Dog const & rhs) {
	*this = rhs;
	return *this;
} */

Dog::~Dog() {
	std::cout << "Dog died." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Ruff Ruff!" << std::endl;
}