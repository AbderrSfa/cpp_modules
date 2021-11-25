/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:18:08 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 16:10:44 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const & src) { *this = src; }

Span::~Span() {}

Span &	Span::operator=(Span const & rhs) {
	if (this == &rhs)	
		return (*this);
	this->_N = rhs._N;
	this->_vect = rhs._vect;
	return (*this);
}

void	Span::addNumber(int num) {
	if (this->_vect.size() == this->_N)
		throw ContainerFull();
	this->_vect.push_back(num);
}

int		Span::shortestSpan( void ) {
	if (this->_vect.size() <= 1)
		throw NotEnoughNumbers();
	int ret = INT_MAX;

	for (size_t i = 0; i < this->_vect.size() - 1; i++)
	{
		for (size_t j = i + 1; j < this->_vect.size(); j++)
		{
			if (abs(this->_vect.at(i) - this->_vect.at(j)) < ret)
				ret = abs(this->_vect.at(i) - this->_vect.at(j));
		}	
	}
	return (ret);
}

int		Span::longestSpan( void ) {
	if (this->_vect.size() <= 1)
		throw NotEnoughNumbers();
	return (*max_element(this->_vect.begin(), this->_vect.end())
		- *min_element(this->_vect.begin(), this->_vect.end()));
}