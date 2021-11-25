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

class Span
{
	private:
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

		void	addNumber(int num);
		int		shortestSpan( void );
		int		longestSpan( void );

		std::vector<int>	*_vect;
};

#endif