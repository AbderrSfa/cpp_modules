#include <iostream>

class   ContactEntry {
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	public:
		ContactEntry(std::string first, std::string last, std::string nick, std::string phone_num, std::string secret) {
			FirstName = first;
			LastName = last;
			Nickname = nick;
			PhoneNumber = phone_num;
			DarkestSecret = secret;
		}

		void	print_contact_row() {
			std::cout << FirstName << ", " << LastName << ", " << Nickname << std::endl;
		}
};

/* class PhoneBook {
	private:
		Contact contacts[8];
	
	public:
		PhoneBook() {
		}
}; */



void    PrintPhoneBook() {
	std::cout << "=============================================" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "=============================================\n" << std::endl;

}

void    AddContact() {
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
	ContactEntry contact(first, last, nickname, phone_num, secret);
	contact.print_contact_row();
}

int     main() {
	std::string input;

	std::cout << "Enter a command: SEARCH - ADD - EXIT" << std::endl;
	std::cout << "> ";
	while (std::getline(std::cin, input)) {
		if (input == "EXIT")
			return (0);
		if (input == "SEARCH")
			PrintPhoneBook();
		if (input == "ADD")
			AddContact();
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