/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 11:58:03 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main() {
	try {
		Bureaucrat	worker("worker", 40);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ROBOTOMY request", "Bender");

		std::cout << *rrf << std::endl;

		worker.signForm(*rrf);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}