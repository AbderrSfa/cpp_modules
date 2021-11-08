/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 13:11:47 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string aTarget) : Form("RobotomyRequestForm", 72, 45), _Target(aTarget) {
	std::cout << "RobotomyRequestForm created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("RobotomyRequestForm", 72, 45), _Target(src._Target) {
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Removed." << std::endl;	
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= this->getGradeToExecute()) {
		int	num = rand();
		std::cout << num;
/* 		if (num < 50)
			std::cout << _Target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _Target << " failed to robotomize" << std::endl;		 */
	}
}