/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:01:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:37:17 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string aTarget) : Form("ShrubberyCreationForm", 145, 137), _Target(aTarget) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("ShrubberyCreationForm", 145, 137), _Target(src._Target) {
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Target = rhs._Target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= this->getGradeToExecute()) {
		std::ofstream	ofs(this->_Target + "_shrubbery");
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n" << std::endl;
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n" << std::endl;
		ofs << "       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n" << std::endl;
	}
}