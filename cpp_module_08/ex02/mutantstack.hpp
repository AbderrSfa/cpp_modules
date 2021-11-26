/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/26 11:38:26 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

class mutantstack : public std::stack<int>
{
	private:
	
	public:
		mutantstack( void ) {}
		mutantstack(mutantstack const & src) { *this = src; } ;
		~mutantstack() {}
		mutantstack & operator=(mutantstack const & rhs) { return (*this); };
		//typedef typename std::stack<int>::container_type::iterator iterator;
};

#endif