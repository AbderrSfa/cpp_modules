/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:35 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 14:16:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main( int argc, char **argv ) {
	std::ifstream   ifs(argv[1]);
	std::ofstream   ofs("new.out");
	std::string     blop;
	int				pos = 0;
	
	if ( argc == 2 ) {
		while ( std::getline(ifs, blop) ) {
			pos = blop.find( "std", pos );
			if (pos != -1) {
				blop.erase( pos, 3 );
				blop.insert( pos, "AAAA" );
			}
			ofs << blop << std::endl;
		}
	}
	else
		std::cout << "Invalid arguments." << std::endl;
	return (0);
}