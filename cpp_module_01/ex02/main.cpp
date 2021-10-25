/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:14 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:15 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {
	std::string		Brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &Brain;
	std::string&	stringREF = Brain;

	std::cout << &Brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}