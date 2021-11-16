/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:45 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:32:24 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5) {}


PresidentialPardonForm::PresidentialPardonForm(std::string aTarget) : Form("PresidentialPardonForm", 25, 5), _Target(aTarget) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _Target(src._Target) {
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const char * PresidentialPardonForm::GradeTooHighException::what() const throw() {
	return ("Exception: PresidentialPardonForm Grade Too High");
}

const char * PresidentialPardonForm::FormNotSignedException::what() const throw() {
	return ("Exception: PresidentialPardonForm Not Yet Signed");
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() <= this->getGradeToExecute()) {
		std::cout << this->_Target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	else
		throw PresidentialPardonForm::GradeTooHighException();
}