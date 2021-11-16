/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 10:59:58 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	try
	{
		Form agreement("test", -10, 160);

		std::cout << agreement << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form		contract("Contract", 1, 5);
		Bureaucrat	janitor("Janitor", 140);

		std::cout << contract << std::endl;

		janitor.signForm(contract);
		contract.beSigned(janitor);

		std::cout << contract << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form		treaty("Treaty", 5, 10);
		Bureaucrat	manager("Manager", 3);

		std::cout << treaty << std::endl;

		manager.signForm(treaty);
		treaty.beSigned(manager);

		std::cout << treaty << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}