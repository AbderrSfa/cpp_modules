/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:11 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:07:41 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
    this->setType("Cat");
	std::cout << "Cat is born." << std::endl;
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat is born (copy constructor)" << std::endl;
	*this = src;
}

/* Cat &  Cat::operator=(Cat const & rhs) {
	*this = rhs;
	return *this;
} */

Cat::~Cat() {
	std::cout << "Cat died." << std::endl;
}