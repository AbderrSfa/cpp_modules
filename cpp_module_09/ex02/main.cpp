/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderr <abderr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:11:30 by asfaihi           #+#    #+#             */
/*   Updated: 2023/09/23 20:01:40 by abderr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool valid_number(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void ft_error()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	std::vector<int> arr;
	if (argc < 2)
		ft_error();
	for (int i = 1; i < argc; i++)
	{
		int temp = 0;
		if (!valid_number(argv[i]) || (temp = std::atoi(argv[i])) < 0)
			ft_error();
		arr.push_back(temp);
	}
	PMergeMe pm(arr);
	return 0;
}
