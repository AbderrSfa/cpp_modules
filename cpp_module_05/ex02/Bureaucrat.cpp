/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:59:13 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 12:20:39 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const aName, int aGrade) : _Name(aName), _Grade(aGrade) {
	if (aGrade < 1)
		throw GradeTooHighException();
	else if (aGrade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat is born." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _Name(src._Name) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Grade = rhs._Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat died." << std::endl;
}

std::string const Bureaucrat::getName( void ) const { return (this->_Name); }

int		Bureaucrat::getGrade( void ) const { return (this->_Grade); }

void	Bureaucrat::IncrementGrade( void ) {
	if (this->_Grade == 1)
		throw GradeTooHighException();
	this->_Grade--;
}

void	Bureaucrat::DecrementGrade( void ) {
	if (this->_Grade == 150)
		throw GradeTooHighException();
	this->_Grade++;
}

void	Bureaucrat::signForm(Form & form) const {
	if (this->_Grade <= form.getGradeToSign()) {
		form.beSigned(*this);
		std::cout << this->_Name << " signs " << form.getName() << std::endl;
	}
	else
		std::cout << this->_Name << " cannot sign " << form.getName() << " because they have a low grade." << std::endl;
}

void	Bureaucrat::executeForm(Form const & form) const {
	if (!form.getIsSigned())
		std::cout << form.getName() << "is not signed yet.";
	if (this->_Grade <= form.getGradeToExecute()) {
		form.execute(*this);
		std::cout << this->_Name << " executes " << form.getName() << std::endl;
	}
	else
		std::cout << this->_Name << " cannot execute " << form.getName() << " because they have a low grade." << std::endl;

}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat: Grade Too High.");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat: Grade Too Low.");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o); 
}