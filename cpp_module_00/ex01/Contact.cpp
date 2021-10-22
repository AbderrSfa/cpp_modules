/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:57:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/22 16:50:10 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	Contact::getFirstName( void ) const {
	return (this->_FirstName);
}

std::string	Contact::getLastName( void ) const {
	return (this->_LastName);	
}

std::string	Contact::getNickname( void ) const {
	return (this->_Nickname);
}

std::string	Contact::getPhoneNumber( void ) const {
	return (this->_PhoneNumber);
}

std::string	Contact::getDarkestSecret( void ) const {
	return (this->_DarkestSecret);
}

void	Contact::setFirstName( std::string aFirstName) {
	this->_FirstName = aFirstName;
}

void	Contact::setLastName( std::string aLastName) {
	this->_LastName = aLastName;
}

void	Contact::setNickname( std::string aNickname) {
	this->_Nickname = aNickname;
}

void	Contact::setPhoneNumber( std::string aPhoneNumber) {
	this->_PhoneNumber = aPhoneNumber;
}

void	Contact::setDarkestSecret( std::string aDarkestSecret) {
	this->_DarkestSecret = aDarkestSecret;
}

std::string	TrimString(std::string aString)
{
	if (aString.length() > 10)
	{
		aString.erase(9, aString.length() - 9);
		aString.append(".");
	}
	return (aString);
}

void	Contact::PrintContactRow( int i ) const {
	std::string aFirstName;
	std::string aLastName;
	std::string aNickname;

	aFirstName = TrimString(this->_FirstName);
	aLastName = TrimString(this->_LastName);
	aNickname = TrimString(this->_Nickname);
	
	std::cout << "|" << i << std::setw(10) << "|";
	std::cout << aFirstName << std::setw(11 - aFirstName.length()) << "|";
	std::cout << aLastName << std::setw(11 - aLastName.length()) << "|";
	std::cout << aNickname << std::setw(11 - aNickname.length()) << "|" << std::endl;
}