/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:38:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 09:46:16 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
    this->setType("WrongCat");
	std::cout << "WrongCat is born." << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
	std::cout << "WrongCat is born (copy constructor)" << std::endl;
	*this = src;
}

WrongCat &  WrongCat::operator=(WrongCat const & rhs) {
	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat died." << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong Meeeooowww!" << std::endl;
}