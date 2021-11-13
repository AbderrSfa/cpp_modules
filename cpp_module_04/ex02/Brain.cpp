/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:27:37 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/13 21:17:12 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain is born." << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain is born (copy constructor)" << std::endl;
	*this = src;
}

Brain &  Brain::operator=(Brain const & rhs) {
	if (this == &rhs)
		return (*this);
	int	i = 0;
	while (i < 100) {
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain died." << std::endl;
}