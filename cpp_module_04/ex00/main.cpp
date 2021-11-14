/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:37:19 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/14 05:47:52 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int     main() {
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << std::endl;

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << std::endl;

		meta->makeSound();
		dog->makeSound();
		cat->makeSound(); //will output the cat sound!
		std::cout << std::endl;

		delete dog;
		delete cat;
		delete meta;
		std::cout << "\n=====================\n" << std::endl;
	}

	{
		const WrongAnimal* wrongmeta = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		std::cout << std::endl;

		wrongmeta->makeSound();
		wrongcat->makeSound();
		std::cout << std::endl;

		delete wrongcat;
		delete wrongmeta;
	}
}