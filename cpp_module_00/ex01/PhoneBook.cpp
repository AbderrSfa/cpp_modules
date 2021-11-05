/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:15 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/05 10:20:09 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int		PhoneBook::getActualSize( void ) const { return (this->_ActualSize); }

int		PhoneBook::getCurrentSize( void ) const { return (this->_CurrentSize); }

void	PhoneBook::setActualSize( int aSize ) { this->_ActualSize = aSize; }

void	PhoneBook::setCurrentSize( int cSize ) { this->_CurrentSize = cSize; }

void	PhoneBook::PrintPhoneBook( void ) const {
	int		i;
	int		index;

	std::cout << BLUE << "+===========================================+" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "+===========================================+" << RESET << std::endl;
	i = 0;
	while (i < this->_ActualSize) {
		this->_Contacts[i].PrintContactRow(i);
		i++;
	}
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << std::endl << YELLOW << "ENTER AN INDEX: " << RESET;
	std::cin >> index;
	if (!std::cin.fail() && index > -1 && index < this->_ActualSize)
	{
		std::cout << GREEN << "First Name: " << RESET << this->_Contacts[index].getFirstName() << std::endl;
		std::cout << GREEN << "Last Name: " << RESET << this->_Contacts[index].getLastName() << std::endl;
		std::cout << GREEN << "Nickname: " << RESET << this->_Contacts[index].getNickname() << std::endl;
		std::cout << GREEN << "Phone Number: " << RESET << this->_Contacts[index].getPhoneNumber() << std::endl;
		std::cout << GREEN << "Darkest Secret: " << RESET << this->_Contacts[index].getDarkestSecret() << std::endl;
	}
	else {
		std::cout << RED << "INVALID INDEX." << RESET << std::endl;
	}
	std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}

void	PhoneBook::AddContact( void ) {
	int		i;

	i = 0;
	std::string aFirstName;
	std::string aLastName;
	std::string aNickname;
	std::string aPhoneNumber;
	std::string aDarkestSecret;

	std::cout << GREEN << "First Name: " << RESET;
	std::getline(std::cin, aFirstName);
	std::cout << GREEN << "Last Name: " << RESET;
	std::getline(std::cin, aLastName);
	std::cout << GREEN << "Nickname: " << RESET;
	std::getline(std::cin, aNickname);
	std::cout << GREEN << "Phone Number: " << RESET;
	std::getline(std::cin, aPhoneNumber);
	std::cout << GREEN << "Darkest Secret: " << RESET;
	std::getline(std::cin, aDarkestSecret);

	if (this->_ActualSize < 8) {
		i = this->_ActualSize;
		this->_ActualSize++;
	}
	else {
		if (this->_CurrentSize > 7) {
			this->_CurrentSize = 0;
		}
		i = this->_CurrentSize;
		this->_CurrentSize++;
	}
	
	this->_Contacts[i].setFirstName(aFirstName);
	this->_Contacts[i].setLastName(aLastName);
	this->_Contacts[i].setNickname(aNickname);
	this->_Contacts[i].setPhoneNumber(aPhoneNumber);
	this->_Contacts[i].setDarkestSecret(aDarkestSecret);
}

int		main() {
	std::string input;
	PhoneBook	phonebook;

	phonebook.setActualSize(0);
	phonebook.setCurrentSize(0);
	std::cout << YELLOW << "ENTER A COMMAND: SEARCH - ADD - EXIT." << RESET << std::endl;
	std::cout << "> ";
	while (std::getline(std::cin, input)) {
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phonebook.AddContact();
		else if (input == "SEARCH")
			phonebook.PrintPhoneBook();
		else if (input != "")
			std::cout << RED << "INVALID COMMAND." << RESET << std::endl;
		std::cout << "> ";
	}
	return (0);
}