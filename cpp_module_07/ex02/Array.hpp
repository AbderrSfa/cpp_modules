/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:06:22 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/25 10:24:40 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template< typename T >
class Array
{
	private:
		T				*_Arr;
		unsigned int	_Size;

	public:
		Array() : _Arr(NULL), _Size(0) {};
		Array(unsigned int n) : _Arr(new T[n]), _Size(n) {}
		Array(Array const & src) : _Arr(NULL), _Size(0) { *this = src; }
		~Array() { delete [] this->_Arr; };

		Array & operator=(Array const & rhs) {
			if (this == &rhs)
				return (*this);
			this->_Size = rhs._Size;
			if (this->_Arr)
				delete [] this->_Arr;
			this->_Arr = new T[this->_Size];
			for (size_t i = 0; i < this->_Size; i++) {
				this->_Arr[i] = rhs._Arr[i];
			}	
			return (*this);
		}

		class	OutOfLimits : public std::exception {
			const char * what() const throw() {
				return ("Exception: Element is out of bounds.");
			}
		};

		T &			operator[](unsigned int index) const {
			if (index >= this->_Size)
				throw OutOfLimits();
			return (this->_Arr[index]);
		};

		unsigned int size() const { return (this->_Size); };
};

#endif