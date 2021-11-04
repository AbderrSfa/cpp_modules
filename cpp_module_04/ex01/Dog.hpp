/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:33:33 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 10:48:15 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal {
	private:
		Brain	*_brain;

	public:
		Dog( void );
		Dog(Dog const & src);
		Dog &	operator=(Dog const & rhs);
		~Dog();

		void		makeSound( void ) const ;
};

#endif