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
# include <cstdlib>

template<typename T>
class Array
{
	private:
		T				*_Arr;
		unsigned int	_Size;

	public:
		Array() : _Arr(0), _Size(0) {};
		Array(unsigned int n) : _Arr(new T[n]), _Size(n) {}
		Array(Array const & src) { *this = src; }
		~Array() { delete [] this->_Arr; };

		Array & operator=(Array const & rhs) {
			if (this == &rhs)
				return (*this);
			this->_Size = rhs._Size;
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

		T &			operator[](unsigned int index) {
			if (index >= this->_Size)
				throw OutOfLimits();
			return (this->_Arr[index]);
		};

		const T &	operator[](unsigned int index) const {
			if (index >= this->_Size)
				throw OutOfLimits();
			return (this->_Arr[index]);
		};

		unsigned int size() const { return (this->_size); };

		void	print( void ) {
			for (size_t i = 0; i < 4; i++)
			{
				std::cout << this->_Arr[i] << " ";
			}
		};
};

#endif