/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:08:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:49:56 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _GradeToSign(), _GradeToExecute() {}

Form::Form(std::string const aName, int const aToSign, int const aToExecute) :
	_Name(aName), _IsSigned(false), _GradeToSign(aToSign), _GradeToExecute(aToExecute) {
	if (this->_GradeToExecute < 1 || this->_GradeToSign < 1)
		throw GradeTooHighException();
	if (this->_GradeToExecute > 150 || this->_GradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src) :
	_Name(src._Name), _GradeToSign(src._GradeToSign), _GradeToExecute(src._GradeToExecute) {
	*this = src;
}

Form & Form::operator=(Form const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_IsSigned = rhs._IsSigned;
	return (*this);
}

Form::~Form() {}

std::string const	Form::getName( void ) const { return (this->_Name); }

bool				Form::getIsSigned( void ) const { return (this->_IsSigned); }

int					Form::getGradeToSign( void ) const { return (this->_GradeToSign); }

int					Form::getGradeToExecute( void ) const { return (this->_GradeToExecute); }

void	Form::beSigned(Bureaucrat const & brc) {
	if (brc.getGrade() <= this->_GradeToSign)
		this->_IsSigned = 1;
	else
		throw GradeTooHighException();
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("Exception: Form Grade Too High");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("Exception: Form Grade Too Low");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << "Form name: " << rhs.getName() << " | Signed: " << rhs.getIsSigned() << " | Grade to sign: " << rhs.getGradeToSign() << " | Grade to execute: " << rhs.getGradeToExecute() << ".";
	return (o);
}