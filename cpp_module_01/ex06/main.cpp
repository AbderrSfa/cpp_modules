/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:50:40 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/26 14:56:25 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int     main(int argc, char **argv) {
	if (argc == 2) {
		Karen	yoink;
	
		yoink.complain("DEBUG");
	}
	else {
		std::cout << "Invalid arguments." << std::endl;
	}
	return (0);
}