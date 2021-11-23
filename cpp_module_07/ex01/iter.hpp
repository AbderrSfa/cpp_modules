/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:20:06 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/23 14:22:38 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *arr, size_t size, void (*funct_ptr)(T const &val)) {
	for (size_t i = 0; i < size; i++) {
		(*funct_ptr)(arr[i]);
	}
}

#endif