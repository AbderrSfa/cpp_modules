/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:30:50 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 10:31:35 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T const & x ) {
	std::cout << x << std::endl;
}

int main() {
	int			tab1[] = {0, 1, 2, 3, 4};
	float		tab2[] = {0.0f, 1.45f, 2.0f, 3.88f, 4.1f};
	std::string tab3[] = { "abc", "def", "ghi", "jkl", "mno" };

	iter( tab1, 5, print );
	std::cout << std::endl;
	iter( tab2, 5, print );
	std::cout << std::endl;
	iter( tab3, 5, print );
	return 0;
}
