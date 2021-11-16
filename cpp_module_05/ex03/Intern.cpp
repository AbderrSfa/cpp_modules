#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) { *this = src; }

Intern & Intern::operator=(Intern const & rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

Intern::~Intern() {}

const char* Intern::FormNotFound::what() const throw() {
	return ("InterException: Form Not Found!");
}

Form*	Intern::ShrubberyCreation( std::string aTarget )
{ return (new ShrubberyCreationForm(aTarget));}

Form* Intern::RobotomyRequest( std::string aTarget )
{ return (new RobotomyRequestForm(aTarget));}

Form* Intern::PresidentialPardon( std::string aTarget )
{ return (new PresidentialPardonForm(aTarget));}

Form*	Intern::makeForm( std::string aName, std::string aTarget )
{
	typedef Form*(Intern:: *FunctionPointer)(std::string aTarget);
	FunctionPointer pointer[3] = {
		pointer[0] = &Intern::ShrubberyCreation,
		pointer[1] = &Intern::RobotomyRequest,
		pointer[2] = &Intern::PresidentialPardon
	};

	std::string	Forms[] = { "shrubbery creation", "robotomy request", "presidential pardon" };

	int	i = 0;
	while (i < 3) {
		if (Forms[i] == aName) {
			std::cout << "Intern creates " << aName << std::endl;
			return ((this->*pointer[i])(aTarget));
		}
	}
	throw Intern::FormNotFound();
}