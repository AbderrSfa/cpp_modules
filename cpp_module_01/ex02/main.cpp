/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:14 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 09:45:30 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "The address of the string: \t\t\t" << &str << std::endl;
	std::cout << "The address of the string using stringPTR:\t" << stringPTR << std::endl;
	std::cout << "The address of the string using stringREF:\t" <<  &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Display the string using the pointer:\t\t" <<  *stringPTR << std::endl;
	std::cout << "Display the string using the reference:\t\t" <<  stringREF << std::endl;
}