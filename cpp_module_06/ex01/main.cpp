/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/21 07:10:34 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int		number;
	char	character;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.number = 42;
	data.character = 'A';

	std::cout << data.number << std::endl;
	std::cout << data.character << std::endl;
	std::cout << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << ptr->number << std::endl;
	std::cout << ptr->character << std::endl;


	return (0);
}