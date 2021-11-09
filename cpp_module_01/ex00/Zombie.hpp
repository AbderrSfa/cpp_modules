/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:33 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 09:29:02 by asfaihi          ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie( void );

		std::string	getName( void ) const ;
		void		setName(std::string name);

		void	announce( void ) const ;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif