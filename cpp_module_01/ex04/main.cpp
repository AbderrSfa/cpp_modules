/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:35 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/26 12:16:14 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#define YELLOW "\e[1;33m"

int     main( int argc, char **argv ) {
	if ( argc == 4 ) {
		std::string		filename;
		filename = argv[1];

		std::ifstream   ifs(argv[1]);
		std::ofstream   ofs(filename.append(".replace"));
		std::string     blop;
		int				pos = 0;
	
		while ( std::getline(ifs, blop) ) {
			pos = 0;
			while (pos != -1) {
				pos = blop.find( argv[2], pos );
				if (pos != -1) {
					blop.erase( pos, strlen(argv[2]) );
					blop.insert( pos, argv[3] );
				}
			}
			ofs << blop << std::endl;
		}
	}
	else
		std::cout << YELLOW << "Invalid arguments." << std::endl;
	return (0);
}