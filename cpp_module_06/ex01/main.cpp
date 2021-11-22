/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/22 11:36:40 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	int		num;
	char	character;
	float	fl;
};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;

	data.num = 42;
	data.character = 'A';
	data.fl = 42.42;

	std::cout << data.num << std::endl;
	std::cout << data.character << std::endl;
	std::cout << data.fl << std::endl;

	std::cout << std::endl;

	uintptr_t	raw = serialize(&data);
	Data*		ptr = deserialize(raw);

	std::cout << ptr->num << std::endl;
	std::cout << ptr->character << std::endl;
	std::cout << ptr->fl << std::endl;


	return (0);
}