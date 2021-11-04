/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:13 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 10:48:17 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Cat : public Animal {
	private:
		Brain	*_brain;

	public:
		Cat( void );
		Cat(Cat const & src);
		Cat &	operator=(Cat const & rhs);
		~Cat();

		void		makeSound( void ) const ;
};

#endif