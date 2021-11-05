/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:17 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/05 10:07:54 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <limits.h>

# define GREEN "\e[1;32m"
# define RESET "\e[0m"
# define RED "\e[1;91m"
# define CYAN "\e[1;36m"
# define YELLOW "\e[1;33m"
# define PURPLE "\e[1;35m"
# define BLUE "\e[1;34m"

class   PhoneBook {
	private:
		int				_ActualSize;
		int				_CurrentSize;
		Contact			_Contacts[8];
	
	public:		
		PhoneBook() {};
		~PhoneBook() {};

		int		getActualSize( void ) const ;
		int		getCurrentSize( void ) const ;
		
		void	setActualSize( int aSize );
		void	setCurrentSize( int cSize );

		void	PrintPhoneBook( void ) const ;
		void	AddContact( void ) ;
};

#endif