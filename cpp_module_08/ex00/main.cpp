/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:10:36 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 12:24:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main() {
	try
	{
		std::vector<int>	vect;

		vect.push_back(1);
		vect.push_back(20);
		vect.push_back(4);
		vect.push_back(6);

		easyfind(vect, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}