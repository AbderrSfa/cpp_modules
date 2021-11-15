/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:08:50 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:40:27 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form {
	private:
		std::string const	_Name;
		bool				_IsSigned;
		int const			_GradeToSign;
		int const			_GradeToExecute;
		Form( void );

	public:
		Form(std::string const aName, int const aGradeToSign, int const aGradeToExecute);
		Form(Form const & src) ;
		Form & operator=(Form const & rhs);
		~Form();

		std::string const	getName( void ) const ;
		bool				getIsSigned( void ) const ;
		int 				getGradeToSign( void ) const ;
		int 				getGradeToExecute( void ) const ;

		void	beSigned(Bureaucrat const & brc);

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);


#endif