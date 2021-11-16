/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 11:10:10 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {
	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 100);

		std::cout << test << std::endl;
		worker.signForm(test);
		std::cout << test << std::endl;
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		RobotomyRequestForm		test("happy");
		Bureaucrat				worker("worker", 45);

		std::cout << test << std::endl;
		worker.signForm(test);
		std::cout << test << std::endl;
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;


	try
	{
		PresidentialPardonForm	test("happy");
		Bureaucrat				worker("worker", 5);

		std::cout << test << std::endl;
		worker.signForm(test);
		std::cout << test << std::endl;
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 100);

		std::cout << test << std::endl;
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}