/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:37:19 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 09:51:40 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int     main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << std::endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	std::cout << std::endl;

	wrongcat->makeSound();
	wrongmeta->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;
	std::cout << std::endl;

	delete wrongcat;
	delete wrongmeta;
}