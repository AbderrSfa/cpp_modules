/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:10:38 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 12:24:36 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class	DoesNotExist : public std::exception {
	const char * what() const throw() { return ("Exception: Element does not exist"); }
};

template< typename T >
void	easyfind(T & container, int x) {
	if (std::find(container.begin(), container.end(), x) != container.end())
		std::cout << "Element " << x << " was found." << std::endl;
	else
		throw DoesNotExist();
}

#endif