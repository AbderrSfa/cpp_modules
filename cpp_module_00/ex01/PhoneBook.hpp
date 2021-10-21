/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:17 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/21 17:47:06 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class   Contact {
	private:
		std::string	const _PhoneNumber;
		std::string	const _DarkestSecret;
		std::string	const _FirstName;
		std::string	const _LastName;
		std::string	const _Nickname;

	public:
		Contact() {}
		~Contact() {}
		//ContactEntry( std::string aFirst, std::string aLast, std::string aNick, std::string aPhoneNum, std::string aSecret );
		
		void	PrintContactRow( int i ) const ;
		std::string	getPhoneNumber( void ) const ;
		std::string	getDarkestSecret( void ) const ;
};

class   PhoneBook {
	public:
		int				ActualSize;
		int				CurrentSize;
		Contact	Contacts[8];
		
		PhoneBook() {};
		~PhoneBook() {};
};

#endif