#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		Form*	ShrubberyCreation( std::string aTarget );
		Form*	RobotomyRequest( std::string aTarget );
		Form*	PresidentialPardon( std::string aTarget );

	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator = (Intern const & rhs);
		class FormNotFound: public std::exception
		{
			const char * what() const throw();
		};

		Form*	makeForm( std::string aName, std::string aTarget );
};

#endif