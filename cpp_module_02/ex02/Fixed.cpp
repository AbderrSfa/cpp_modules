/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:39:04 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:49:24 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors / Destructor
Fixed::Fixed( void ) : _FixedPointVal(0) {
}

Fixed::Fixed( Fixed const & src ) {
	this->_FixedPointVal = src.getRawBits();
}

Fixed::Fixed( int const aInt ) {
	this->_FixedPointVal = aInt << this->_Bits;
}

Fixed::Fixed( float const aFloat ) {
	this->_FixedPointVal = (int)(roundf(aFloat * (1 << this->_Bits)));
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	this->_FixedPointVal = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
}

// Getter and Setter
int		Fixed::getRawBits( void ) const { return ( this->_FixedPointVal ); }

void	Fixed::setRawBits( int const raw ) { this->_FixedPointVal = raw; }

// Converters
float	Fixed::toFloat( void ) const {
	return ( (float)this->_FixedPointVal / (1 << this->_Bits) );
}

int Fixed::toInt( void ) const {
	return ( (int)(this->_FixedPointVal >> this->_Bits) );
}

// Comparison Operators
bool	Fixed::operator>( Fixed const & rhs ) const { return (this->_FixedPointVal > rhs.getRawBits()); }

bool	Fixed::operator<( Fixed const & rhs ) const { return (this->_FixedPointVal < rhs.getRawBits()); }

bool	Fixed::operator>=( Fixed const & rhs ) const { return (this->_FixedPointVal >= rhs.getRawBits()); }

bool	Fixed::operator<=( Fixed const & rhs ) const { return (this->_FixedPointVal <= rhs.getRawBits()); }

bool	Fixed::operator==( Fixed const & rhs ) const { return (this->_FixedPointVal == rhs.getRawBits()); }

bool	Fixed::operator!=( Fixed const & rhs ) const { return (this->_FixedPointVal != rhs.getRawBits()); }

// Arithmetic Operators
Fixed	Fixed::operator+( Fixed const & rhs ) const {
	Fixed temp;

	temp = this->toFloat() + rhs.toFloat();
	return (temp);}

Fixed	Fixed::operator-( Fixed const & rhs ) const {
	Fixed temp;

	temp = this->toFloat() - rhs.toFloat();
	return (temp);
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {
	Fixed temp;

	temp = this->toFloat() * rhs.toFloat();
	return (temp);
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {
	Fixed temp;

	temp = this->toFloat() / rhs.toFloat();
	return (temp);
}

// Incrementers and decrementers
Fixed &	Fixed::operator++( void ) {
	this->_FixedPointVal++;
	return (*this);
}

Fixed &	Fixed::operator--( void ) {
	this->_FixedPointVal--;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	temp(*this);
	this->operator++();
	return (temp);
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp(*this);
	this->operator--();
	return (temp);
}

// Min / Max
Fixed &	Fixed::min( Fixed & one, Fixed & two ) {
	if (one < two)
		return (one);
	return (two);
}

Fixed const &	Fixed::min( Fixed const & one, Fixed const & two ) {
	if (one < two)
		return (one);
	return (two);
}

Fixed &	Fixed::max( Fixed & one, Fixed & two ) {
	if (one > two)
		return (one);
	return (two);
}

Fixed  const &	Fixed::max( Fixed const & one, Fixed const & two ) {
	if (one > two)
		return (one);
	return (two);
}

// Insertion operator overload
std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return ( o );
}