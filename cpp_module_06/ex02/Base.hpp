/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:39:15 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/22 12:11:31 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
# define BASE_HPP

# include <iostream>

class	Base
{
	public:
		virtual ~Base(){};
};

class	A : public Base {};

class	B : public Base {};

class	C : public Base {};

#endif