/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:39:06 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/04 10:17:40 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class   WrongAnimal {
	protected:
		std::string type;

	public:
		WrongAnimal( void );
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal &	operator=(WrongAnimal const & rhs);
		~WrongAnimal();

		std::string	getType( void ) const ;
		void		setType(std::string aType);

		void		makeSound( void ) const ;
};

#endif