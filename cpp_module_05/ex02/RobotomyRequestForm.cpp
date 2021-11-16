/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:34:49 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string aTarget) : Form("RobotomyRequestForm", 72, 45), _Target(aTarget) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("RobotomyRequestForm", 72, 45), _Target(src._Target) {
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const char * RobotomyRequestForm::GradeTooHighException::what() const throw() {
	return ("Exception: RobotomyRequestForm Grade Too High");
}

const char * RobotomyRequestForm::FormNotSignedException::what() const throw() {
	return ("Exception: RobotomyRequestForm Not Yet Signed");
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() <= this->getGradeToExecute()) {
		srand(time(NULL));
		int num = rand() % 2;
		if (num)
			std::cout << _Target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _Target << " failed to robotomize" << std::endl;		
	}
	else
		throw RobotomyRequestForm::GradeTooHighException();
}