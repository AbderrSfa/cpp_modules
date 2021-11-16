/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:35:47 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string aTarget) : Form("ShrubberyCreationForm", 145, 137), _Target(aTarget) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("ShrubberyCreationForm", 145, 137), _Target(src._Target) {
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char * ShrubberyCreationForm::GradeTooHighException::what() const throw() {
	return ("Exception: ShrubberyCreationForm Grade Too High");
}

const char * ShrubberyCreationForm::FormNotSignedException::what() const throw() {
	return ("Exception: ShrubberyCreationForm Not Yet Signed");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() <= this->getGradeToExecute()) {
		std::ofstream	ofs(this->_Target + "_shrubbery");
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n" << std::endl;
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n" << std::endl;
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n" << std::endl;
	}
	else
		throw ShrubberyCreationForm::GradeTooHighException();
}