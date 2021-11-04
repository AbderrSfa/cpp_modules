/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:38:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 09:44:36 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat(WrongCat const & src);
		WrongCat &	operator=(WrongCat const & rhs);
		~WrongCat();

		void		makeSound( void ) const ;
};

#endif