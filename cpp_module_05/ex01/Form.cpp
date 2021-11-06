/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:08:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/06 13:50:48 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const aName, int const aToSign, int const aToExecute) :
	_Name(aName), _IsSigned(false), _GradeToSign(aToSign), _GradeToExecute(aToExecute) {
	std::cout << "Form created." << std::endl;
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

Form::~Form() {
	std::cout << "Form destroyed." << std::endl;
}

std::string const	Form::getName( void ) const { return (this->_Name); }

bool				Form::getIsSigned( void ) const { return (this->_IsSigned); }

int					Form::getGradeToSign( void ) const { return (this->_GradeToSign); }

int					Form::getGradeToExecute( void ) const { return (this->_GradeToExecute); }

/* void	Form::beSigned(Bureaucrat const & signature) {
	if (signature.getGrade() <= this->_GradeToSign)
		this->_IsSigned = true;
} */

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << "Form name: " << rhs.getName() << " | Signed: " << rhs.getIsSigned() << " | Grade to sign: " << rhs.getGradeToSign() << " | Grade to execute: " << rhs.getGradeToExecute() << ".";
	return (o);
}