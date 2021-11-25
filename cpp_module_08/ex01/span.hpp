/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:05:10 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 14:13:35 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits.h>

class Span
{
	private:
		std::vector<int>	_vect;
		unsigned int		_N;
		Span( void );

	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span();
		Span & operator=(Span const & rhs);

		class	ContainerFull : public std::exception {
			const char * what() const throw() {
				return ("Exception: No more room to add number.");
			}
		};

		class	NotEnoughNumbers : public std::exception {
			const char * what() const throw() {
				return ("Exception: Not enough numbers in the container.");
			}
		};

		// template<typename T>
		// void	addNumber(T start, T end)
		// {
		// 	int dist = std::distance(start, end);
		// 	if (dist + this->_vect.size() > this->_N)
		// 		throw Span::ContainerFull();
		// 	this->_vect.insert(this->_vect.end(), start, end);
		// }

		void	addNumber(int num);
		int		shortestSpan( void );
		int		longestSpan( void );

};

#endif