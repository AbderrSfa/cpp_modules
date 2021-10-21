/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:15 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/21 17:35:20 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

ContactEntry::ContactEntry( std::string aFirst, std::string aLast, std::string aNick, std::string aPhoneNum, std::string aSecret )
: _PhoneNumber(aPhoneNum), _DarkestSecret(aSecret), FirstName(aFirst), LastName(aLast), Nickname(aNick) {
}

PhoneBook::PhoneBook( void ) {
}

int		main() {
	std::string input;
	PhoneBook	phonebook;

	std::cout << "Enter a command: SEARCH - ADD - EXIT" << std::endl;
	std::cout << "> ";
	while (std::getline(std::cin, input)) {
		if (input == "EXIT")
			return (0);
		if (input == "SEARCH")

		if (input == "ADD")

		std::cout << "> ";
	}
	return (0);
}