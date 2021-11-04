/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:27:37 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 14:16:18 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	this->ideas = new std::string[100];
	std::cout << "Brain is born." << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain is born (copy constructor)" << std::endl;
	*this = src;
}

Brain &  Brain::operator=(Brain const & rhs) {
	this->ideas = new std::string[100];
	*this->ideas = *rhs.ideas;
	return *this;
}

Brain::~Brain() {
	delete [] this->ideas;
	std::cout << "Brain died." << std::endl;
}