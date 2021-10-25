/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:54 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

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

#endif