/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 15:22:44 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {
	try {
		Bureaucrat	Jordan("Peterson", 5);
		PresidentialPardonForm	C_16("home");

		std::cout << C_16 << std::endl;
		Jordan.signForm(C_16);
		C_16.execute(Jordan);
		std::cout << C_16 << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}