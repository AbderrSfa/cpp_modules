/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:35 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 11:22:19 by asfaihi          ###   ########.fr       */
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
		if (!ifs.is_open()) {
			std::cout << YELLOW << "File error." << std::endl;
			return (1);
		}
		std::ofstream   ofs(filename.append(".replace"));
		std::string     line;
		int				pos = 0;
	
		while ( std::getline(ifs, line) ) {
			pos = 0;
			while (pos != -1) {
				pos = line.find( argv[2], pos );
				if (pos != -1) {
					line.erase( pos, strlen(argv[2]) );
					line.insert( pos, argv[3] );
				}
			}
			ofs << line << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cout << YELLOW << "Invalid arguments." << std::endl;
	return (0);
}