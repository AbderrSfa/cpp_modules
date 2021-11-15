/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:45 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:47:54 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5) {}


PresidentialPardonForm::PresidentialPardonForm(std::string aTarget) : Form("PresidentialPardonForm", 25, 5), _Target(aTarget) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("PresidentialPardonForm", 25, 5), _Target(src._Target) {
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= this->getGradeToExecute()) {
		std::cout << this->_Target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}