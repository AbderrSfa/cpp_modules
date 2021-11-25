/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:06:25 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 10:36:21 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main() {
	try
	{
		Array<int>	hello(4);

		hello[0] = 4;
		hello[1] = 1;
		hello[2] = 45;
		hello[3] = 22;

		std::cout << hello[2] << std::endl;

        Array<int>   nice(hello);

		std::cout << nice[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array<float>	hello(4);

		hello[0] = 4.444;
		hello[1] = 1.123;
		hello[2] = 45.02;
		hello[3] = 22.44;

		std::cout << hello[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array<std::string>	hello(4);

		hello[0] = "hey";
		hello[1] = "hi";
		hello[2] = "echo";
		hello[3] = "test";

		std::cout << hello[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}