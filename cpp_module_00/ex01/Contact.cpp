/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:57:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/22 11:05:38 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getFirstName( void ) const {
	return (_FirstName);
}

std::string	Contact::getLastName( void ) const {
	return (_LastName);	
}

std::string	Contact::getNickname( void ) const {
	return (_Nickname);
}

std::string	Contact::getPhoneNumber( void ) const {
	return (_PhoneNumber);
}

std::string	Contact::getDarkestSecret( void ) const {
	return (_DarkestSecret);
}

void	Contact::setFirstName( std::string aFirstName) {
	_FirstName = aFirstName;
}

void	Contact::setLastName( std::string aLastName) {
	_LastName = aLastName;
}

void	Contact::setNickname( std::string aNickname) {
	_Nickname = aNickname;
}

void	Contact::setPhoneNumber( std::string aPhoneNumber) {
	_PhoneNumber = aPhoneNumber;
}

void	Contact::setDarkestSecret( std::string aDarkestSecret) {
	_DarkestSecret = aDarkestSecret;
}

void	Contact::PrintContactRow( int i ) const {
	std::cout << "|" << i << "         |";
	std::cout << _FirstName << " |" << _LastName << " |" << _Nickname << " |" << std::endl;
}