/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/16 11:34:10 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {
	try
	{
		Bureaucrat Bob("Bob", 2);

		std::cout << Bob << std::endl;
		Bob.IncrementGrade();
		std::cout << Bob << std::endl;
		Bob.IncrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jack("jack", 149);

		std::cout << jack << std::endl;
		jack.DecrementGrade();
		std::cout << jack << std::endl;
		jack.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat error("error", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat error("error", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}