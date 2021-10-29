/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:39:04 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/29 17:37:06 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors / Destructor

Fixed::Fixed( void ) : _FixedPointVal(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const aInt ) {
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointVal = aInt << this->_FixedPointVal;
}

Fixed::Fixed( float const aFloat ) {
	std::cout << "Float constructor called" << std::endl;
	this->_FixedPointVal = (int)(roundf(aFloat * (1 << this->_FractionalBits)));
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_FixedPointVal = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

// Comparison Operators

bool	Fixed::operator>( Fixed const & rhs ) const {
	if (this->_FixedPointVal > rhs._FractionalBits)
		return (true);
	return (false);
}

bool	Fixed::operator<( Fixed const & rhs ) const {
	if (this->_FixedPointVal < rhs._FractionalBits)
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const & rhs ) const {
	if (this->_FixedPointVal >= rhs._FractionalBits)
		return (true);
	return (false);
}

bool	Fixed::operator<=( Fixed const & rhs ) const {
	if (this->_FixedPointVal <= rhs._FractionalBits)
		return (true);
	return (false);
}

bool	Fixed::operator==( Fixed const & rhs ) const {
	if (this->_FixedPointVal == rhs._FractionalBits)
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const & rhs ) const {
	if (this->_FixedPointVal != rhs._FractionalBits)
		return (true);
	return (false);
}

// Arithmetic Operators

Fixed	Fixed::operator+( Fixed const & rhs ) const {
	return Fixed( this->_FixedPointVal + rhs._FixedPointVal );
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {
	return Fixed( this->_FixedPointVal - rhs._FixedPointVal );
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {
	return Fixed( this->_FixedPointVal * rhs._FixedPointVal );
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {
	return Fixed( this->_FixedPointVal / rhs._FixedPointVal );
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;	
	return (this->_FixedPointVal);
}

void	Fixed::setRawBits( int const raw ) {
	this->_FixedPointVal = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_FixedPointVal / (1 << this->_FractionalBits));
}

int Fixed::toInt( void ) const {
	return ((int)(this->_FixedPointVal >> this->_FractionalBits));
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return (o);
}