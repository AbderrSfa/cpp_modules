/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:50:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/26 13:17:28 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::complain(std::string level) {
	if (level == "DEBUG")
		this->debug();
	else if (level == "INFO")
		this->info();
	else if (level == "WARNING")
		this->warning();
	else if (level == "ERROR")
		this->error();
}

void	Karen::debug( void ) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}