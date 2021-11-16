/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:00:22 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:35:11 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	private:
		std::string	_Target;
		ShrubberyCreationForm( void );

	public:
		ShrubberyCreationForm(std::string aTarget);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	FormNotSignedException : public std::exception {
			const char * what() const throw();
		};

		void	execute(Bureaucrat const & executor) const ;
};

#endif