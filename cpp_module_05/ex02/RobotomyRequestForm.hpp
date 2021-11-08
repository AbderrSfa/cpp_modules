/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:59:40 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 15:42:20 by asfaihi          ###   ########.fr       */
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

	public:
		RobotomyRequestForm(std::string aTarget);
		RobotomyRequestForm(RobotomyRequestForm const & src) ;
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const ;
};

#endif