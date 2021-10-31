/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:39:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/31 16:22:41 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed {
	private:
		int					_FixedPointVal;
		static const int	_FractionalBits = 8;
		
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const aInt );
		Fixed( float const aFloat );
		~Fixed( void );

		Fixed &	operator=( Fixed const & rhs );

		bool	operator>( Fixed const & rhs ) const;
		bool	operator<( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;
		
		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;

		Fixed &	operator++( void );
		Fixed &	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed &	min(Fixed & one, Fixed & two);
		static const Fixed & min(Fixed const & one, Fixed const & two);
		static Fixed &	max(Fixed & one, Fixed & two);
		static const Fixed & max(Fixed const & one, Fixed const & two);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;	
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ); 

#endif