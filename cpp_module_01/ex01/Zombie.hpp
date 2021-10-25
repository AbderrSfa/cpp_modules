/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:22 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:23 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	private:
		std::string	_Name;
	
	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void ) const ;
		void	setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif