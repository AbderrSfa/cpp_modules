/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 14:28:13 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {
/* 	try {
		Bureaucrat	Jordan("Peterson", 5);
		RobotomyRequestForm	C_16("home");

		Jordan.signForm(C_16);
		Jordan.executeForm(C_16);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	} */
	Form	* C_16 = new RobotomyRequestForm("lol");

	delete C_16;
}