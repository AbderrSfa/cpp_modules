/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:38:18 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 09:44:50 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void	swap(T& a, T& b) {
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template< typename T >
T&		min(T& a, T& b) {
	if (b <= a)
		return (b);
	return (a);
}

template< typename T >
T&		max(T& a, T& b) {
	if (b >= a)
		return (b);
	return (a);		
}

#endif