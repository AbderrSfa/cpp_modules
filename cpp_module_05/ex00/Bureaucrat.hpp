/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 10:09:28 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif