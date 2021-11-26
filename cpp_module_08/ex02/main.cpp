/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:52 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/26 11:37:51 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main() {
	mutantstack	ms;

	ms.push(5);	
	ms.push(17);	

	std::cout << ms.top() << std::endl;

	ms.pop();

	std::cout << ms.size() << std::endl;

	ms.push(3);
	ms.push(5);
	ms.push(737);
	std::cout << ms.top() << std::endl;
	ms.pop();
	std::cout << ms.top() << std::endl;
}