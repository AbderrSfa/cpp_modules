/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:19:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/21 04:35:24 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	try {
		if (argc != 2) {
			std::cout << "Invalid number of arguments." << std::endl;
			return (1);
		}
		Converter	cast(argv[1]);
		cast.PrintConversion(argv[1]);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}