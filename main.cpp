#include <iostream>

class   Blah {
	public:
		std::string const MyName;

		Blah( std::string aName, int aAge );
		~Blah();
		void    PrintBlah( void ) const ;
		void    IncrementAge( void ) ;

	private:
		int         _MyAge;
};

Blah::Blah( std::string const aName, int aAge ) : MyName(aName), _MyAge(aAge) {
	std::cout << "Blah Constructor Called." << std::endl;
}

Blah::~Blah( void ) {
	std::cout << "Blah Destructor Called." << std::endl;
}

void    Blah::PrintBlah( void ) const {
	std::cout << this->MyName + ' ' << this->_MyAge << std::endl;
}

void    Blah::IncrementAge( void ) {
	this->_MyAge++;
}

int     main( void ) {
	Blah    abdo("ABDERR", 22);

	abdo.PrintBlah();
	abdo.IncrementAge();
	abdo.PrintBlah();
}

/// Initialization list
/// Separate method declarations from definitions
/// this->
/// Namespaces
/// Use as many constants as possible. Also use const keyword with methods that shouldn't change the instance of a class
/// _PrivateVariableNames
/// Structs are public by default. Classes are private by default
/// GetFoo - SetFoo
/// What the hell are static attributes - pointer to member/member functions