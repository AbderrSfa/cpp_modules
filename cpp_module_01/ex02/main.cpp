#include <iostream>

int		main() {
	std::string		Brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &Brain;
	std::string&	stringREF = Brain;

	std::cout << &Brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}