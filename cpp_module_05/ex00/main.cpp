/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/15 14:13:42 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {
	try {
		Bureaucrat	bookie("Mike", 100);
		std::cout << bookie << std::endl;
		bookie.DecrementGrade();
		std::cout << bookie << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << '\n';
	}

/* 	Bureaucrat	dan("Dan", 55);
	Bureaucrat	jim("Jim", 44);
	jim = dan;

	std::cout << jim << std::endl; */
}