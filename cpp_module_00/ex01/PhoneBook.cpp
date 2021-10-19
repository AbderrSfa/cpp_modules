#include <iostream>

class   ContactEntry {
	private:
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	public:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;

		ContactEntry() {

		}

		void	AddEntry(std::string first, std::string last, std::string nick, std::string phone_num, std::string secret) {
			FirstName = first;
			LastName = last;
			Nickname = nick;
			PhoneNumber = phone_num;
			DarkestSecret = secret;
		}

		void	print_contact_row(int i) {
			std::cout << "|" << i << "         |";
			std::cout << FirstName << " |" << LastName << " |" << Nickname << " |" << std::endl;
		}

		std::string	getPhoneNumber() {
			return (PhoneNumber);
		}

		std::string	getDarkestSecret() {
			return (DarkestSecret);
		}

};

class PhoneBook {
	public:
		int				ActualSize;
		int				CurrentSize;
		ContactEntry	contacts[8];
		PhoneBook() {

		}
};



void    PrintPhoneBook(PhoneBook phonebook) {
	int	index;
	
	std::cout << "=============================================" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "=============================================" << std::endl;
	int	i = 0;
	while (i < phonebook.ActualSize)
	{
		phonebook.contacts[i].print_contact_row(i);
		i++;
	}
	std::cout << "Enter an index: ";
	std::cin >> index;
	if (index >= 0 && index <= phonebook.ActualSize)
	{
		std::cout << "First Name: " << phonebook.contacts[index].FirstName << std::endl;
		std::cout << "Last Name: " << phonebook.contacts[index].LastName << std::endl;
		std::cout << "Nickname: " << phonebook.contacts[index].Nickname << std::endl;
		std::cout << "Phone Number: " << phonebook.contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << phonebook.contacts[index].getDarkestSecret() << std::endl;
	}
}

PhoneBook    AddContact(PhoneBook phonebook) {
	std::string first;
	std::string last;
	std::string nickname;
	std::string phone_num;
	std::string secret;

	std::cout << "First Name: ";
	std::getline(std::cin, first);
	std::cout << "Last Name: ";
	std::getline(std::cin, last);
    std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
    std::cout << "Phone Number: ";
	std::getline(std::cin, phone_num);
    std::cout << "Darkest Secret: ";
	std::getline(std::cin, secret);
	if (phonebook.ActualSize < 8) {
		phonebook.contacts[phonebook.ActualSize++].AddEntry(first, last, nickname, phone_num, secret);
	}
	else {
		if (phonebook.CurrentSize > 8)
			phonebook.CurrentSize = 0;
		phonebook.contacts[phonebook.CurrentSize++].AddEntry(first, last, nickname, phone_num, secret);
	}
	return (phonebook);
}

int     main() {
	std::string input;
	PhoneBook	phonebook;

	std::cout << "Enter a command: SEARCH - ADD - EXIT" << std::endl;
	std::cout << "> ";
	while (std::getline(std::cin, input)) {
		if (input == "EXIT")
			return (0);
		if (input == "SEARCH")
			PrintPhoneBook(phonebook);
		if (input == "ADD")
			phonebook = AddContact(phonebook);
		std::cout << "> ";
	}

	return (0);
}

/* 
	PhoneBook:
		- Contacts
	
	Contact:
		- fistname
		- lastname
		- nickname
		- phonenumber
		- darkestsecret
*/