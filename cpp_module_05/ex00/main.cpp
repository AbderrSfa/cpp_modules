/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:55:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/08 10:22:45 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {
	try {
		Bureaucrat	yoink("Gagooch", 180);
		std::cout << yoink << std::endl;
		yoink.DecrementGrade();
		std::cout << yoink << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}