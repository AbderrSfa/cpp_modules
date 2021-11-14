/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:11 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/13 21:17:52 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "meme is born." << std::endl;
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat is born (copy constructor)" << std::endl;
	this->_brain = NULL;
	*this = src;
}

Cat &  Cat::operator=(Cat const & rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	if (this->_brain == NULL)
		this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return (*this);
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat died." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meeeooowww!" << std::endl;
}