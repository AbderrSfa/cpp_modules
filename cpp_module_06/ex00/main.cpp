/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:19:26 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/18 14:42:12 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Invalid arguments." << std::endl;
		return (1);
	}
	int		i;
	char	c;
	float	fl;
	double	d;

	i = static_cast<int>(atoi(argv[1]));
	c = static_cast<char>(i);
	fl = static_cast<float>(i);
	d = static_cast<double>(i);

	if (c > 32)
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << fl << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}