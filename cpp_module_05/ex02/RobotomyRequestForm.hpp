/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:59:40 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:33:58 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <time.h>
# include "Form.hpp"

class	RobotomyRequestForm : public Form {
	private:
		std::string _Target;
		RobotomyRequestForm( void );

	public:
		RobotomyRequestForm(std::string aTarget);
		RobotomyRequestForm(RobotomyRequestForm const & src) ;
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();

		class	GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class	FormNotSignedException : public std::exception {
			const char * what() const throw();
		};

		void	execute(Bureaucrat const & executor) const ;
};

#endif