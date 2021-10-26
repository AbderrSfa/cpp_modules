/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:50:40 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/26 17:01:48 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int     main(int argc, char **argv) {
	if (argc == 2) {
		Karen	karen;
		std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int			i = 0;
		while (i < 4) {
			if (complains[i] == argv[1])
				break;
			i++;
		}
		switch (i) {
			case 0 :
				karen.complain("DEBUG");
				std::cout << std::endl;
			case 1 :
				karen.complain("INFO");
				std::cout << std::endl;
			case 2 :
				karen.complain("WARNING");
				std::cout << std::endl;
			case 3 :
				karen.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else {
		std::cout << "Invalid arguments." << std::endl;
	}
	return (0);
}