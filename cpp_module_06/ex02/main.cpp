/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:56:31 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/22 13:31:48 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *	generate( void ) {
	srand(time(NULL));
	int type = rand() % 3;
	if (type == 0)
		return (new A);
	else if (type == 1)
		return (new B);
	else if (type == 2)
		return (new C);
	return (NULL);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	try {
		Base temp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}

	try {
		Base temp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try {
		Base temp = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int		main() {
	Base * ptr = generate();
	Base * ref = generate();
	
	identify(*ptr);
	identify(ref);

	delete	ptr;
	delete	ref;
	return (0);
}