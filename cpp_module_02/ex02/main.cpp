/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:39:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/29 17:40:52 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(42.01f);
	Fixed b(42.01f);
	Fixed c;

	c = a - b;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

/* 	std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	std::cout << a << std::endl; */

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	if (a != b)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}