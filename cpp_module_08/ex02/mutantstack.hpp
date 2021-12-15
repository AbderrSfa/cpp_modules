/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/12/15 05:44:35 by asfaihi          ###   ########.fr       */
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
		MutantStack( void ) : std::stack<T, Container>() {}
		MutantStack(MutantStack const & src) : std::stack<T, Container>(src) {}
		~MutantStack() {}
		MutantStack & operator=(MutantStack const & rhs) {
			if (this == &rhs)
				return (*this);
			this->c = rhs.c;
			return (*this);
		};

		typedef typename Container::iterator iterator;
		
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif