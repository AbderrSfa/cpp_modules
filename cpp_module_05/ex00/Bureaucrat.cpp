/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:59:13 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/06 11:14:29 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string Name, int Grade ): _Name(Name)
{
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = Grade;
}

Bureaucrat::Bureaucrat(std::string const aName, int aGrade) : _Name(aName), _Grade(aGrade) {
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

void	Bureaucrat::IncrementGrade( void ) { this->_Grade--; }

void	Bureaucrat::DecrementGrade( void ) { this->_Grade++; }

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o); 
}