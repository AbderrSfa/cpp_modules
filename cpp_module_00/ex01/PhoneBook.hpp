/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:17 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/22 12:39:41 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

# define GREEN "\e[1;32m"
# define RESET "\e[0m"
# define RED "\e[1;91m"
# define CYAN "\e[1;36m"
# define YELLOW "\e[1;33m"
# define PURPLE "\e[1;35m"
# define BLUE "\e[1;34m"

class   Contact {
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;

	public:
		Contact() {}
		~Contact() {}
		
		std::string	getFirstName( void ) const ;
		std::string	getLastName( void ) const ;
		std::string	getNickname( void ) const ;
		std::string	getPhoneNumber( void ) const ;
		std::string	getDarkestSecret( void ) const ;

		void		setFirstName( std::string aFirstName);
		void		setLastName( std::string aLastName);
		void		setNickname( std::string aNickname);
		void		setPhoneNumber( std::string aPhoneNumber);
		void		setDarkestSecret( std::string aDarkestSecret);

		void		PrintContactRow( int i ) const ;

};

class   PhoneBook {
	public:
		int				ActualSize;
		int				CurrentSize;
		Contact			Contacts[8];
		
		PhoneBook() {};
		~PhoneBook() {};

		void	PrintPhoneBook( void ) const ;
		void	AddContact( void ) ;
};

#endif