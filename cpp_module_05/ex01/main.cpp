/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 11:18:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	try {
		Bureaucrat	Jordan("Peterson", 40);
		Form	C_16("C-16", 1, 1);
		std::cout << Jordan << std::endl;
		std::cout << C_16 << std::endl;
		Jordan.signForm(C_16);
		std::cout << C_16 << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}