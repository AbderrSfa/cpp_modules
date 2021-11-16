/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:57:11 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 11:56:45 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form {
	private:
		std::string	_Target;
		PresidentialPardonForm( void );
		void	action( void ) const;

	public:
		PresidentialPardonForm(std::string aTarget);
		PresidentialPardonForm(PresidentialPardonForm const & src) ;
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	FormNotSignedException : public std::exception {
			const char * what() const throw();
		};

		void	execute(Bureaucrat const & executor) const ;
};

#endif