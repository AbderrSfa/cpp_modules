/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:06:22 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/23 17:01:16 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array & operator=(Array const & rhs);
		~Array();

		T	*_Arr;

		void	print( void );
};

template<typename T>
Array<T>::Array() {}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->_Arr = new T[n];
}

template<typename T>
Array<T>::Array(Array const & src) { *this = src; }

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_Arr = rhs._Arr;
	return (*this);
}

template<typename T>
Array<T>::~Array() {}

template<typename T>
void	Array<T>::print( void ) {
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << this->_Arr[i] << " ";
	}
}

#endif