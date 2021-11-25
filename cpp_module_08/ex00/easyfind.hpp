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

# include <vector>
# include <iostream>

class	DoesNotExist : public std::exception {
	const char * what() const throw() { return ("Exception: Element does not exist"); }
};

template< typename T >
int		easyfind(T & container, int x) {
	if (std::find(container.begin(), container.end(), x) != container.end()) {
		std::cout << "Element " << x << " was found.";
	}
	else
		throw DoesNotExist();
	return (-1);
}

#endif