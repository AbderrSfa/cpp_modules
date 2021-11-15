/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 13:51:22 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	// test the test the form pram constructor
	try
	{
		Form test("test", -10, 180);

		std::cout << test.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the a working form declaration
	try
	{
		Form		contract("Contract", 1, 5);
		Bureaucrat	director("Director", 1);

		std::cout << contract << std::endl;

		director.signForm(contract);
		contract.beSigned(director);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// what will happend if you try to sign a form with a lower garde? let's see
	try
	{
		Form		Project("Project Approval", 5, 10);
		Bureaucrat	worker("worker", 77);

		std::cout << Project << std::endl;

		worker.signForm(Project);
		Project.beSigned(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}