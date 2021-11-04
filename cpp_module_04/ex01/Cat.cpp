/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:11 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 11:46:04 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
    this->setType("Cat");
	std::cout << "Cat is born." << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat is born (copy constructor)" << std::endl;
	*this = src;
}

Cat &  Cat::operator=(Cat const & rhs) {
	this->type = rhs.type;
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat died." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meeeooowww!" << std::endl;
}