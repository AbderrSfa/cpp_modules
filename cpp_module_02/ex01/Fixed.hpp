/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:39:01 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/29 17:22:53 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class   Fixed {
	private:
		int					_FixedPointVal;
		static const int	_Bits = 8;
		
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const aInt );
		Fixed( float const aFloat );
		~Fixed();

		Fixed &	operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;	
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ); 

#endif