/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/26 13:21:53 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack( void ) {}
		MutantStack(MutantStack const & src) { *this = src; } ;
		~MutantStack() {}
		MutantStack & operator=(MutantStack const & rhs) { return (*this); };

		typedef typename std::stack<T, Container>::container_type::iterator	iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif