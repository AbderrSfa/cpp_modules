/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:15 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/22 16:50:59 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::PrintPhoneBook( void ) const {
	int		i;
	int		index;

	std::cout << BLUE << "=============================================" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "=============================================" << RESET << std::endl;
	i = 0;
	while (i < this->ActualSize) {
		this->Contacts[i].PrintContactRow(i);
		i++;
	}
	std::cout << YELLOW << "ENTER AN INDEX: " << RESET;
	std::cin >> index;
	
	if (index > -1 && index < this->ActualSize)
	{
		std::cout << "First Name: " << this->Contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->Contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->Contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->Contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->Contacts[index].getDarkestSecret() << std::endl;
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

	if (this->ActualSize < 8) {
		i = this->ActualSize;
		this->ActualSize++;
	}
	else {
		if (this->CurrentSize > 7) {
			this->CurrentSize = 0;
		}
		i = this->CurrentSize;
		this->CurrentSize++;
	}
	
	this->Contacts[i].setFirstName(aFirstName);
	this->Contacts[i].setLastName(aLastName);
	this->Contacts[i].setNickname(aNickname);
	this->Contacts[i].setPhoneNumber(aPhoneNumber);
	this->Contacts[i].setDarkestSecret(aDarkestSecret);
}

int		main() {
	std::string input;
	PhoneBook	phonebook;

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