/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:55 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 10:04:14 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB {
	private:
		std::string	_Name;
		Weapon*		_Weapon;
	
	public:
		HumanB(std::string aName);
		~HumanB();

		std::string	getName( void ) const ;
		void		setName(std::string aName);

		void	attack( void ) const;
		void	setWeapon(Weapon &aWeapon);
};

#endif