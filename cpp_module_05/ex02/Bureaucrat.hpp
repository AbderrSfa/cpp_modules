/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:41:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Form;

class	Bureaucrat {
	private:
		std::string const	_Name;
		int					_Grade;
		Bureaucrat( void );

	public:
		Bureaucrat( void );
		Bureaucrat(std::string const aName, int aGrade);
		Bureaucrat(Bureaucrat const & src) ;
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		std::string	const getName( void ) const ;
		int			getGrade( void ) const ;

		void		IncrementGrade( void );
		void		DecrementGrade( void );

		void		signForm(Form & form) const ;
		void		executeForm(Form const & form) const ;

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif