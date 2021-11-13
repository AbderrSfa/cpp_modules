/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:33:30 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 11:51:56 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	this->type = "Dog";
	std::cout << "Dog is born." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog is born (copy constructor)" << std::endl;
	*this = src;
}

Dog &  Dog::operator=(Dog const & rhs) {
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	return *this;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog died." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Ruff Ruff!" << std::endl;
}