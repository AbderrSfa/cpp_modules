/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:13:04 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:25:11 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class   Animal {
	protected:
		std::string type;

	public:
		Animal( void );
		Animal(Animal const & src);
		//Animal &	operator=(Animal const & rhs);
		~Animal();

		std::string	getType( void ) const ;
		void		setType(std::string aType);

		void		makeSound( void ) const ;
};

#endif