/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:50:24 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/26 16:55:32 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

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

void    Karen::complain(std::string level) {
	typedef	void(Karen:: *FunctionPointer)();
	FunctionPointer	pointer[4] = {
		pointer[0] = &Karen::debug,
		pointer[1] = &Karen::info,
		pointer[2] = &Karen::warning,
		pointer[3] = &Karen::error
	};

	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	while (i < 4) {
		if (complains[i] == level) {
			(this->*pointer[i])();
			break ;
		}
		i++;
	}
}