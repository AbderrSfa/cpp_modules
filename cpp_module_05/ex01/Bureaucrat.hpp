/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/06 13:44:19 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Bureaucrat {
	private:
		std::string const	_Name;
		int					_Grade;

	public:
		Bureaucrat(std::string const aName, int aGrade);
		Bureaucrat(Bureaucrat const & src) ;
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		std::string	const getName( void ) const ;
		int			getGrade( void ) const ;

		void		IncrementGrade( void );
		void		DecrementGrade( void );

		//void		signForm(Form & form);
};

class	GradeTooHighException : public std::exception {
	public:
		
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif