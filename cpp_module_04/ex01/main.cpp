/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:37:19 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/14 05:36:48 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int     main() {
	int		array_size = 4;
	Animal	*animals[array_size];
	int		i = 0;

	while (i < (array_size / 2))
	{
		animals[i] = new Cat();
		i++;
	}
	std::cout << std::endl;
	
	while (i < array_size)
	{
		animals[i] = new Dog();
		i++;
	}
	std::cout << std::endl;

	i = 0;
	while (i < array_size) {
		delete animals[i++];
	}
	
/* 	const Animal*	meta = new Animal();
 */
}